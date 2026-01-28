#! /bin/bash

read -rp "SSH clone url: " url
read -rp "Project name: " name
read -rp "Year: " year
read -rp "Description: " description
repo_name=$(basename $url .git)
name_upper=$(printf "%s" "$name" | tr '[:lower:]' '[:upper:]')

cd ~/delivery
git clone $url
cd $repo_name
cp -r ~/delivery/usefull_repo/Start/* .
cp ~/delivery/usefull_repo/Start/.gitignore .
mv src/project.c src/$name.c
find . -type f -exec sed -i -E \
  -e 's/EPITECH PROJECT/__EPITECH_PROTECTED__/g' \
  -e "s/(\[project\]|project_|PROJECT)/$name/g" \
  -e 's/__EPITECH_PROTECTED__/EPITECH PROJECT/g' \
  {} +
find . -type f -exec sed -i -E \
  "s/(EPITECH PROJECT, )[0-9]{4}/\1$year/g" \
  {} +
sed -i -E "
  s/^([[:space:]]*#[[:space:]]*ifndef)[[:space:]]+project/\1 $name_upper/;
  s/^([[:space:]]*#[[:space:]]*define)[[:space:]]+project/\1 $name_upper/;
  s/^([[:space:]]*#[[:space:]]*endif[[:space:]]*\/\*)[[:space:]]*project/\1 $name_upper/
" include/my.h
find . -type f -exec sed -i \
  "s/Descrption/$description/g" \
  {} +

git add *
git commit -m "AUTO: creation of the repo"
git push
