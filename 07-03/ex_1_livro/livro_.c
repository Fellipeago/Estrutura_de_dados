#include <stdio.h>
#include <stdlib.h>
#include "livro.c"

int main() {
	Livro *livro, biblioteca[5];
	char titulo [80];
	int ano, numero_pag, contador;
	float preco, media, soma;
	for (contador=0; contador<5; contador++){
		printf ("nome do titulo: ");
		fflush (stdin);
		gets (titulo);
		printf ("Ano do livro: ");
		scanf ("%d", &ano);
		printf ("numero de paginas: ");
		scanf ("%d", &numero_pag);
		printf ("preco: ");
		scanf ("%f", &preco);
		livro = criar(titulo,ano,numero_pag,preco);
		biblioteca[contador] = *livro;
	}
	soma=0;
	for (contador=0; contador<5; contador++){
		livro = &biblioteca[contador];
		acessar (livro, titulo, &ano, &numero_pag, &preco);
		printf ("\nnome do livro %s; Ano: %d; \nPaginas: %d; preco: %.2f\n\n",titulo,ano,numero_pag,preco);
		soma = soma + numero_pag;
	}
	media = soma/5;
	printf ("A media do numero de paginas e: %.2f",media);
	return 0;	
}
