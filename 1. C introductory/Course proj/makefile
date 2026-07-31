all: t_sens
obj= main.o temp_functions.o

t_sens: $(obj)
	gcc -o t_sens.exe $(obj)

main.o: main.c temp_functions.h
	gcc -c main.c -o main.o 

temp_functions.o: temp_functions.c temp_functions.h
	gcc -c temp_functions.c -o temp_functions.o

.PHONY : all clean
clean:
	del /Q *.o t_sens.exe