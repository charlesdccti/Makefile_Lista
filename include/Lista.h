#include <stdio.h>
#include <stdlib.h>

// struct "exemplo" possui dois campos
typedef struct exemplo t_exemplo;


t_exemplo * criar_lista(int valor);

t_exemplo* adicionar_lista(int v);

void imprimir_lista();

int lista_vazia();

// função para buscar um elemento na lista
// essa função recebe o valor a ser buscado e um ponteiro para ponteiro "ant"
// o "ant" servirá para guardarmos o anterior do elemento encontrado, pois
// iremos utilizar na remoção, assim fica mais otimizado para não ter que
// percorrer a lista novamente pois precisa-se do elemento anterior ao elemento
// que irá ser removido para ajustar corretamente a lista
// retorna o ponteiro para o elemento encontrado ou NULL se não encontrar
t_exemplo * buscar_elemento(int v, t_exemplo **ant);


// função que remove um elemento da lista
// retorna 1 se conseguiu remover e 0 caso contrário
int remover_elemento(int v);

// função que retorna o tamanho da lista
int tamanho_lista();



