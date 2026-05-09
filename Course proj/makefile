all: t_sens
obj= main.o temp_api.o

t_sens: $(obj)
	gcc -o t_sens.exe $(obj)

main.o: main.c temp_api.h
	gcc -c main.c -o main.o 

temp_api.o: temp_api.c temp_api.h
	gcc -c temp_api.c -o temp_api.o

.PHONY : all clean
clean:
	del /Q *.o t_sens.exe