BIN = cpl

.PHONY: all
all: $(BIN)

greeting.o: greeting.h greeting.c
hello.o: hello.h hello.c greeting.h
main.o: main.c hello.h

$(BIN): greeting.o hello.o main.o
	$(CC) greeting.o hello.o main.o -o $@

.PHONY: clean
clean:
	rm *.o $(BIN)