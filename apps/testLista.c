#include "Lista.h"

// função principal
int main(int argc, char * argv[])
{
	// função que verifica se a lista está vazia
	if(lista_vazia() == 0)
		printf("A lista NAO esta vazia!!\n\n");
	else
		printf("Lista vazia!!\n\n");
	
	printf("Tamanho da lista: %d\n\n", tamanho_lista());

	// cria uma lista passando o valor
	printf("Criando uma lista...\n\n");
	criar_lista(10);

	// adiciona outros elementos à lista
	printf("Adicionando elementos na lista...\n\n");
	adicionar_lista(20);
	adicionar_lista(30);
	adicionar_lista(40);
	adicionar_lista(50);

	// chama a função para imprimir a lista
	printf("Imprimindo os elementos da lista:\n");
	imprimir_lista();

	if(lista_vazia() == 0)
		printf("\nA lista NAO esta vazia!!\n");
	else
		printf("\nLista vazia!!\n");
	
	printf("\nTamanho da lista: %d\n", tamanho_lista());

	// buscando um elemento na lista
	// retorna diferente de NULL se achou e NULL caso contrário
	if(buscar_elemento(10, NULL) != NULL)
		printf("\nElemento 10 encontrado!\n");
	else
		printf("\nElemento 10 NAO encontrado.\n");

	if(buscar_elemento(100, NULL) != NULL)
		printf("\nElemento 100 encontrado!\n");
	else
		printf("\nElemento 100 NAO encontrado.\n");

	// removendo um elemento 30 da lista
	// a função retorna 1 se conseguiu remover e 0 caso contrário
	if(remover_elemento(30))
		printf("\nElemento 30 removido com sucesso!\n");
	else
		printf("\nNAO foi possivel remover o elemento 30.\n");

	printf("\nImprimindo os elementos da lista:\n");
	imprimir_lista();
	
	printf("\nTamanho da lista: %d\n", tamanho_lista());

	return 0;
}