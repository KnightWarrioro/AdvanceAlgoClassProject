TARGET=Exponentiation
all:${TARGET}
	mv ${TARGET} /bin
	rm -f *.o
	rm -f src/*.o
Exponentiation: src/project.o src/printNum.o src/checkInput.o src/exponent.o src/getPower.o src/getNum.o
	g++ -o Exponentiation src/project.o src/printNum.o src/checkInput.o src/exponent.o src/getPower.o src/getNum.o -lgmp -lm
project.o: src/project.cpp /include/Exp.h
	mv project.o src/
	g++ -c src/project.cpp
printNum.o: src/printNum.cpp /include/Exp.h
	mv printNum.o src/
	g++ -c src/printNum.cpp
checkInput.o: src/checkInput.cpp /include/Exp.h
	mv checkInput.o src/
	g++ -c src/checkInput.cpp
exponent.o: src/exponent.cpp /include/Exp.h
	mv exponent.o src/
	g++ -c src/exponent.cpp
getPower.o: src/getPower.cpp /include/Exp.h
	mv getPower.o src/
	g++ -c src/getPower.cpp
getNum.o: src/getNum.cpp /include/Exp.h
	mv getNum.o src/
	g++ -c src/getNum.cpp
clean:
	rm -f bin/*
