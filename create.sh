cd lib
make fclean && make re && make clean
cp libmy.a ../Start/libmy.a
cp include/lib.h ../Start/include/lib.h
make fclean
cd ../