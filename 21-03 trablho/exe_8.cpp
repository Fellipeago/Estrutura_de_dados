/*Quais serão os valores de x, y e p ao final do trecho de código abaixo?*/

#include <stdio.h>

int main () {	
	
	int x, y, *p;
	y = 0; p = &y;
	x = *p; x = 4;
	(*p)++;
	--x;
	(*p) += x;
	//x = 3
	//y = 4
	//*p= &Y; 4
	printf ("%d\n", x);
	printf ("%d\n", y);
	printf ("conteudo do apontador: %d\nendereco apontado %d", *p, p);
    return 0;
}


