all:bin/prog

bin/prog: build/main.o build/circle.o build/triangle.o build/intersection.o
	gcc build/main.o build/circle.o build/triangle.o build/intersection.o -o bin/prog -lm 

build/main.o: src/main.c src/point.h
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/circle.o: src/circle.c src/point.h
	gcc -Wall -Werror -c src/circle.c -o build/circle.o

build/triangle.o: src/triangle.c src/point.h
	gcc -Wall -Werror -c src/triangle.c -o build/triangle.o

build/intersection.o: src/intersection.c src/point.h
	gcc -Wall -Werror -c src/intersection.c -o build/intersection.o

clean: 
	rm -rf Vivod bin/prog build/*.o	

.PHONY: all clean 