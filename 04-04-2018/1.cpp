/*Simule a a��o do algoritmo de an�lise de express�es para cada uma das seguintes strings,
apresentando o conte�do da pilha em cada ponto
a. (A + B} )
b. {[A+B]-[(C-D)]
c. (A+B)-{C+D}-[F+G]
d. ((H)*{([J+K])})
e. (((A))))*/

A) push "("; pop "{"; error.
B) push "{"; push "["; pop "["; push "["; push "("; pop "("; pop "]";  pilha ainda contem um item "{".
C) push "("; pop "("; push "{"; pop "{"; push "["; pop"["; OK!
D) push "("; push "("; pop "("; 
