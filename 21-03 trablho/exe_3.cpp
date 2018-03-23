
/* exe_03 Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique no
computador o resultado. A seguir, escreva um  comentário  em cada comando de atribuição
explicando o que ele faz e o valor da variável à esquerda do '=' após sua execução.*/
#include <stdlib.h>
#include <stdio.h>

int main(){
	int y, *p, x; 
	//Declara as variáveis que serão usadas, sendo dois inteiros e um ponteiro de inteiro.
	y = 0;      
	//Atribui 0 a y.
	p = &y;
	//Atribui o endereço de y ao ponteiro p.
	x = *p;      
	//Atribui o conteúdo apontado por p e guarda em x.
	x = 4;  
	//Atribui 4 a x.
	(*p)++;     
	//Incrementa em 1 o conteúdo que p aponta, o valor de y passa a ser y+1 = 1.
	x--;   
	//Decrementa x, o valor de x passa a ser x-1= 3.      
	(*p) += x;   
	//Adiciona x ao conteúdo de p, ou seja, em y. y passa a ser 4.
	printf ("y = %d\n", y); 
	//imprime a variável y.
	return 0;
}

