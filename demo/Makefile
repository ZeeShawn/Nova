OBJS = main.o Base.o BaseInstance.o LessThan.o Devired.o
CC = gcc 
CFLAGS = -l stdc++ -std=c++11

hello : $(OBJS)
	$(CC) $(CFLAGS) -o hello $(OBJS)
	mv *.o bin

main.o : Devired.h BaseInstance.h LessThan.h
Base.o : Base.h
BaseInstancei.o : BaseInstance.h
Devired.o : Devired.h
LessThan.o : LessThan.h

.PHONY : clean
clean :
	rm bin/*.o
