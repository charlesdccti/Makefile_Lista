
APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src


all:
	gcc -c $(SRC)/Lista.c -I $(INCLUDE) -o $(OBJ)/Lista.o
	gcc $(APPS)/testLista.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/testLista


run:
	$(BIN)/testLista


clean:
	rm $(OBJ)/*.o
	rm $(BIN)/*