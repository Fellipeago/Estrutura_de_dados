#include <stdlib.h>
#include <stdio.h>

int main(){
	//exe_01
	//Incrementamos um ponteiro ele passa a apontar para o pr�ximo valor do mesmo tipo de ponteiro.
	p++;
	
	//Incrementa o conteudo apontado por p.
	(*p)++;
	
	//Incremento no endere�o de p e acessa o novo valor.
	*(p++);
	
	return 0;
}
