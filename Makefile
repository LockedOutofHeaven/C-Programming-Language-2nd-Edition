BIN = cpl

OBJECTS = greeting.o hello.o main.o

$(BIN): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

greeting.o: greeting.h
hello.o: hello.h greeting.h
main.o: hello.h

.PHONY: clean
clean:
	@-rm $(OBJECTS) $(BIN)