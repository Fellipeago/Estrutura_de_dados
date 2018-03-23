/*Os programas (trechos de código) abaixo possuem erros. Qual(is)? Como deveriam
ser?*/

#include <stdio.h>

int main () {	

	int x, *p;
	x = 100;
	//P é uma variável do tipo ponteiro, logo na linha a baixo deveria ser p = endereço de x.
	p = &x;
	printf("Valor de p: %d.\n", *p);

    return 0;
}


#include <stdio.h>

void troca (int *i, int *j) {
	int temp;
	//temp deixa de ser um ponteiro
	temp = *i;
	*i = *j;
	*j = temp;
	
	return;
}

int main () {	
	int x = 10, y = 9;
	
	troca(&x, &y);
	
    return 0;
}

#include <stdio.h>

int main () {	
	char *a, *b;
	a = "abacate";
	b = "uva";
	
	if (*a < *b){
		printf ("%s vem antes de %s no dicionário", a, b);
	}
	else{
		printf ("%s vem depois de %s no dicionário", a, b);
	}
    return 0;
}

