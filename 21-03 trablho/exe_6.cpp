/* O valor de uma variável ou expressão do tipo vetor é o endereço do elemento zero
do vetor. Seja a[] um vetor qualquer, independente de tipo e tamanho, e pa um
ponteiro para o mesmo tipo de a[]. Responda V ou F, justificando:
(V) Após a atribuição pa=&a[0]; pa e a possuem valores identicos, isto é, apontam
para o mesmo endereço*/

/*(V) A atribuição pa=&a[0]; pode ser escrita como pa=a;

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




/*(F) &a[i] e a+i são idênticos
(F) a+i e' o endereço do i-ésimo elemento após a
(F) pa[i] e' idêntico a *(pa+i)
(F) pa=a e' uma operação valida
(V) pa++ e' uma operação valida
(V) a=pa e' uma operação valida
(V) a++ e' uma operação valida */


