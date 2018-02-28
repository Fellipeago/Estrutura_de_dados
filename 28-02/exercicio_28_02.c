#include <stdio.h>
#include <stdlib.h>
/*1. Faça um programa que leia um valor inteiro n e crie dinamicamente um vetor de n elementos
do tipo inteiro. Em seguida o programa deve ler os elementos desse vetor. Depois, o vetor
preenchido deve ser impresso. Além disso, antes de finalizar o programa, deve-se liberar a área
de memória alocada.*/
int main() {
	int n, *p;
	int cont =0;
	scanf ("%i", &n);
	p=(int*)malloc(sizeof(int)*n);
	for (cont; cont<n; cont++){
		scanf ("%i", p+cont);
	}
	cont =0;
	for (cont; cont<n; cont++){
	printf("%i\n", *(p+cont));
	}
	free(p);
	return 0;
}
