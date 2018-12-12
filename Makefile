BIN = cpl

.PHONY: all
all: $(BIN)

hello.o: hello.h hello.c
	cc -c hello.c

main.o: main.c hello.h
	cc -c main.c

$(BIN): hello.o main.o
	cc hello.o main.o -o $(BIN)

.PHONY: clean
clean:
	rm *.o $(BIN)