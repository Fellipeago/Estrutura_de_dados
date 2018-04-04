/*Simule a ação do algoritmo de análise de expressões para cada uma das seguintes strings,
apresentando o conteúdo da pilha em cada ponto
a. (A + B} )
b. {[A+B]-[(C-D)]
c. (A+B)-{C+D}-[F+G]
d. ((H)*{([J+K])})
e. (((A))))*/

A) push "("; pop "{"; error.
B) push "{"; push "["; pop "["; push "["; push "("; pop "("; pop "]";  pilha ainda contem um item "{".
C) push "("; pop "("; push "{"; pop "{"; push "["; pop"["; OK!
D) push "("; push "("; pop "("; 
