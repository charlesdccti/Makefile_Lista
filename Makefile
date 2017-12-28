

all:
	gcc -c ./src/Lista.c -I ./include -o ./obj/Lista.o
	gcc ./apps/testLista.c ./obj/*.o -I ./include -o ./bin/testLista


run:
	./bin/testLista


clean:
	rm ./obj/*.o
	rm ./bin/*