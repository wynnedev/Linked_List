list : driver.o 
	g++ -o list driver.o 

driver.o : driver.cpp tlist.h
	g++ -c driver.cpp

clean : 
	rm list *.o