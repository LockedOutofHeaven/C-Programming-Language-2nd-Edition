BIN = cpl

.PHONY: all
all: $(BIN)

greeting.o: greeting.h greeting.c
	cc -c greeting.c

hello.o: hello.h hello.c greeting.h
	cc -c hello.c

main.o: main.c hello.h
	cc -c main.c

$(BIN): greeting.o hello.o main.o
	cc greeting.o hello.o main.o -o $(BIN)

.PHONY: clean
clean:
	rm *.o $(BIN)