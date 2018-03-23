
/* exe_03 Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique no
computador o resultado. A seguir, escreva um  coment�rio  em cada comando de atribui��o
explicando o que ele faz e o valor da vari�vel � esquerda do '=' ap�s sua execu��o.*/
#include <stdlib.h>
#include <stdio.h>

int main(){
	int y, *p, x; 
	//Declara as vari�veis que ser�o usadas, sendo dois inteiros e um ponteiro de inteiro.
	y = 0;      
	//Atribui 0 a y.
	p = &y;
	//Atribui o endere�o de y ao ponteiro p.
	x = *p;      
	//Atribui o conte�do apontado por p e guarda em x.
	x = 4;  
	//Atribui 4 a x.
	(*p)++;     
	//Incrementa em 1 o conte�do que p aponta, o valor de y passa a ser y+1 = 1.
	x--;   
	//Decrementa x, o valor de x passa a ser x-1= 3.      
	(*p) += x;   
	//Adiciona x ao conte�do de p, ou seja, em y. y passa a ser 4.
	printf ("y = %d\n", y); 
	//imprime a vari�vel y.
	return 0;
}

