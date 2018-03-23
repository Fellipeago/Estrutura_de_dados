/* O que está errado com os programas abaixo? Descubra e indique a solução para
consertá-los. Execute-o no computador para ver se o erro foi resolvido.

//A
#include <stdio.h>

int main () {	
	
	int x, *p;
	x = 10;
	p = &x;
	printf ("%d", *p);
    return 0;
}
//B
#include <stdio.h>
*/
#include <stdio.h>
int main() /* esse programa esta errado */ {
int x, *p;
x = 10;
p = &x;
printf ("%d\n", p);
printf ("%d", &x);
return 0;
}
