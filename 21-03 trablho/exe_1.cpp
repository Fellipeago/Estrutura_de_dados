#include <stdlib.h>
#include <stdio.h>

int main(){
	//exe_01
	//Incrementamos um ponteiro ele passa a apontar para o próximo valor do mesmo tipo de ponteiro.
	p++;
	
	//Incrementa o conteudo apontado por p.
	(*p)++;
	
	//Incremento no endereço de p e acessa o novo valor.
	*(p++);
	
	return 0;
}
