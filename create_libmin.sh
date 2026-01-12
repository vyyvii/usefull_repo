cd lib_minimal
make fclean && make re && make clean
cp libUtilsLibMinimal.a ../Start/libUtilsLibMinimal.a
cp libUtilsLibMinimal.a ../
cp include/utilslibminimal.h ../Start/include/utilslibminimal.h
make fclean
cd ..//