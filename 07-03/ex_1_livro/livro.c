/*Criar um TAD livro, que cont�m os elementos t�tulo, ano de edi��o, n�mero de p�ginas e pre�o.
Criar as opera��es criar, acessar e liberar. Fa�a um programa que usa o TAD criado para ler e
armazenar em vetor dados de 5 livros. Imprimir a m�dia do n�mero de p�ginas dos livros. */

#include <string.h>
#include <stdlib.h>
#include "livro.h"

struct livro{
	char titulo[80]; 
	int ano, numero_pag; 
	float preco;
};

Livro* criar(char *titulo, int ano, int numero_pag, float preco){
	Livro *a = (Livro*) malloc(sizeof(Livro));
	//se a memori aacabar ele retorna NULL
	if (a!=NULL){
		strcpy(a->titulo, titulo);
		a->ano = ano;
		a->numero_pag = numero_pag;
		a->preco = preco;
	}
	return a;
}


void acessar(Livro *livro, char *titulo, int *ano, int *numero_pag, float *preco){
	strcpy(titulo, livro->titulo);
	*ano = livro->ano;
	*numero_pag = livro->numero_pag;
	*preco = livro->preco;
}


void liberar(Livro *livro){
	free(livro);
}
