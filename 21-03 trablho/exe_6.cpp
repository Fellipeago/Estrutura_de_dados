/* O valor de uma vari�vel ou express�o do tipo vetor � o endere�o do elemento zero
do vetor. Seja a[] um vetor qualquer, independente de tipo e tamanho, e pa um
ponteiro para o mesmo tipo de a[]. Responda V ou F, justificando:
(V) Ap�s a atribui��o pa=&a[0]; pa e a possuem valores identicos, isto �, apontam
para o mesmo endere�o*/

/*(V) A atribui��o pa=&a[0]; pode ser escrita como pa=a;

#include <stdio.h>
int main () {	
	int a[1], *pa; 
	pa = &a[0]; 
	pa=a;
	printf ("%d",pa);
    return 0;
}
*/
//(F) a[i] pode ser escrito como *(a+i)
/*
#include <stdio.h>
int main () {	
	int i = 6;
	int a[i], *pa; 
	a[i]; 
	*(a+i);
	printf ("%d",a);
    return 0;
}




/*(F) &a[i] e a+i s�o id�nticos
(F) a+i e' o endere�o do i-�simo elemento ap�s a
(F) pa[i] e' id�ntico a *(pa+i)
(F) pa=a e' uma opera��o valida
(V) pa++ e' uma opera��o valida
(V) a=pa e' uma opera��o valida
(V) a++ e' uma opera��o valida */


