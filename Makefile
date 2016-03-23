
BMI.o:BMI.cpp BMI.h
	g++ -c BMI.cpp

main.o: main.cpp BMI.h
	g++ -c main.cpp


BMI: BMI.o main.o
	g++ -o BMI BMI.o main.o
clean:
	rm BMI *.o	

	















