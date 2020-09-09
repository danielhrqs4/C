# C
 1.Soma de dois números pares
 
 Escreva um programa em que o usuário entre com dois números, A e B, ambos maiores ou iguais a 0. Após isso o programa deverá imprimir:

A soma dos dois números se ambos forem pares
A mensagem "Não posso somar, pois <A> não é par", onde <A> deve ser substituido pelo valor de A
A mensagem "Não posso somar, pois <B> não é par", onde <B> deve ser substituido pelo valor de B
Caso ambos os números não sejam pares, o programa deve imprimir as duas mensagens.
***

2.Fluxograma
Um fluxograma é uma forma simples de representar condicionais. Nos fluxogramas, um retângulo representa um conjunto de instruções e um losango representa uma decisão em relação a uma pergunta. Para que fique melhor de implementar, usemos as seguintes convençoes:

Além de expressões matemáticas e lógicas, instruções podem ser: 
Leia <tipo> <variavel>, Ex: Leia int A, significa que o programa deve executar uma leitura de uma variável int com o nome A.
Imprima "<texto>", Ex: Imprima "Hello World", significa que o programa deve imprimir o texto "Hello World", sem as aspas.
Imprima "<variavel>", Ex Imprima "Valor de A=<A>", significa que o programa deve imprimir o texto "Valor de A=10", se a variável A tiver valor 10.
Os fluxogramas são muito flexíveis, como não existe uma estrutura definida para usá-los, tentaremos explicar individualmente cada vez que uma nova construção for feita. Por enquanto, usando os esclarecimentos acima, implemente o seguinte fluxograma:

Obs: Neste programa, como estamos usando floats, você vai ter que truncar a quantidade de casas decimais quando for imprimir os valores, use "%.Xf"(exemplo printf("%.5f", a) ) onde X é o numero de casas decimais que você quer imprimir.
***

3.Comparação com switch
Usando a construçao switch ... case, escreva um programa que receba dois caracteres, A e B, do usuário e imprima as seguintes coisas:

Caso os dois caracteres forem iguais, o programa deve imprimir "Caracteres <A> e <B> iguais", onde <A> e <B> deve ser o valor de cada caractere.
Caso os dois caracteres sejam diferentes:
Se o primeiro caractere antecede o segundo na tabela ASCII, o programa deve imprimir: "Caractere <A> antecede <B>", onde <A> e <B> deve ser o valor de cada caractere.​
Se o segundo caractere antecede o primeiro na tabela ASCII, o programa deve imprimir: "Caractere <B> antecede <A>", onde <A> e <B> deve ser o valor de cada caractere.
Sugestão: Na linguagem C cases só aceitam constantes, para esse caso use ifs dentro ou antes dos case para limitar as escolhas possíveis.
