main: main.o Person.o Student.o Employee.o Staff.o Faculty.o 
	g++ -o main main.o Person.o Student.o Employee.o Staff.o Faculty.o
 
main.o: main.cpp Person.h Student.h Employee.h Faculty.h Staff.h 
	g++ -c main.cpp 
 
Person.o: Person.cpp Person.h 
	g++ -c Person.cpp

Student.o: Student.cpp Student.h 
	g++ -c Student.cpp

Employee.o: Employee.cpp Employee.h 
	g++ -c Employee.cpp

Staff.o: Staff.cpp Staff.h 
	g++ -c Staff.cpp

Faculty.o: Faculty.cpp Faculty.h 
	g++ -c Faculty.cpp