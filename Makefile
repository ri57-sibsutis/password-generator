.PHONY: clean prepare app test
bin/mode: prepare obj/main.o obj/mode.o
	gcc -Wall obj/main.o obj/mode.o -o bin/mode 

bin/test: prepare obj/mode.o obj/test.o obj/ctest.o
	gcc -Wall obj/mode.o obj/test.o obj/ctest.o -o bin/test 
	
obj/main.o: prepare src/main.c
	gcc -Wall -c src/main.c -o obj/main.o 
	
obj/mode.o: prepare src/mode.c
	gcc -Wall -c src/mode.c -o obj/mode.o 

obj/test.o: prepare test/test.c
	gcc -Wall -c test/test.c -o obj/test.o -Isrc -Ithirdparty

obj/ctest.o: prepare test/ctest.c
	gcc -Wall -c test/ctest.c -o obj/ctest.o -Ithirdparty

prepare: bin obj

app: bin/mode
	bin/mode

test: bin/test
	bin/test

bin:
	mkdir bin

obj:
	mkdir obj

clean:
	rm -f bin/*
	rm -f obj/*