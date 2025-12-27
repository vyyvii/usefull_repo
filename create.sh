cd lib
make fclean && make re && make clean
cp libUtilsLib.a ../Start/libUtilsLib.a
cp include/utilslib.h ../Start/include/utilslib.h
make fclean
cd ..//