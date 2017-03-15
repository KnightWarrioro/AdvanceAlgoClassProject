TARGET = Exponentiation
all:${TARGET}
		rm -f *.o
		mv ${TARGET} /bin
		g++ -o Exponentiation project.o printNum.o checkInput.o exponent.o getPower.o getNum.o -lgmp -lm
project.o: project.cpp ../include/Exp.h
		g++ -c project.cpp
printNum.o: printNum.cpp ../include/Exp.h
		g++ -c printNum.cpp
checkInput.o: checkInput.cpp ../include/Exp.h
		g++ -c checkInput.cpp
exponent.o: exponent.cpp ../include/Exp.h
		g++ -c exponent.cpp
getPower.o: getPower.cpp ../include/Exp.h
		g++ -c getPower.cpp
getNum.o: getNum.cpp ../include/Exp.h
		g++ -c getNum.cpp
clean:
		rm -f /bin/*