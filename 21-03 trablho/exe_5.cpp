/*Escreva um programa que declare uma matriz 100x100 de inteiros. Voce deve
inicializar a matriz com zeros usando ponteiros. Preencha depois a matriz com os
números de 1 a 10.000 usando ponteiros.*/

#include <stdio.h>


int main () {
	
    int vet[100][100];
    int *x = vet[0];
	int i;
	
    for (i = 0; i < (100*100); i++){
    	
        *(x + i) = i + 1;
     	printf("%d ", *(x + i));
	}
	
    return 0;
}


