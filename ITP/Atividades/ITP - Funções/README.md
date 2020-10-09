1 - <br>Dígito na posição <br>
Implemente uma função que receba como entrada dois números inteiros
xxx​ e ppp. A função a ser implementada deve retornar o dígito na posição ppp​ do número xxx​, considerando que a posição
0 é o primeiro dígito à direita do número xxx​.
Implemente também a função main, que deve ler do usuário dois números inteiros, denotando o número de entrada e uma posição de interesse. A função main deve realizar uma chamada à função implementada passando como parâmetros os números lidos e imprimir na tela uma mensagem informando qual o dígito do número na posição solicitada.
***
2 - <br> Funções - número primo <br>
​Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7. A tarefa que seu programa deve executar é dizer se um número é ou não primo. A primeira linha da entrada contém um inteiro N, indicando o número de casos que serão analisados. Cada uma das N linhas seguintes contém um valor inteiro X, que pode ser ou não, um número primo. Para cada caso de teste de entrada, deve ser impressa a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.​
Atenção: nesse exercício você deverá implementar uma função que verifica se um número é primo. Ou seja, depois de implementada a sua função de verificação de número primo, a mesma deverá ser chamada pelo programa principal ( função main())  de acordo com o que foi pedido. 
*** 
3 - <br>Funções - ordenação vetor<br>
Implemente um programa que realiza a ordenação de um vetor de inteiros em ordem crescente.

A primeira linha da entrada indica o número N de vetores que serão ordenados. 

As N linhas seguintes indicam o tamanho do vetor de cada uma das entradas.

As demais linhas indicam os elementos do vetor.

Exemplo de entrada: 3 4 2 3 3 22 7 42 83 12 67 12 19 onde:ZX

3 -> número de vetores que serão ordenados

4 -> tamanho do primeiro vetor

2 -> tamanho do segundo vetor

3 -> tamanho do terceiro vetor

3 -> 1º elemento do primeiro vetor

22 -> 2º elemento do primeiro vetor

7 -> 3º elemento do primeiro vetor

42 -> 4º elemento do primeiro vetor

83 -> 1º elemento do segundo vetor

12 -> 2º elemento do segundo vetor

67 -> 1º elemento do terceiro vetor

12 -> 2º elemento do terceiro vetor

19 -> 3º elemento do terceiro vetor

Atenção: para a resolução da questão você deverá implementar uma função que recebe como parâmetro o vetor a ser ordenado e alterar o vetor para que ele fique ordenado.
***
4 - <>Médias UFRN<>
Antigamente, o cálculo da média na UFRN era calculado através da seguinte fórmula:



Média = ((Nota 01 x 4 ) + ( Nota 02 x 5) + (Nota 03 x 6 )) / 15



Exemplo, se um aluno tirou as notas 8.00, 7.00 e 6.00, sua média é 6.87.



((8.00 x 4) + (7.00 * 5) + (6.00 *6) ) / 15 = 6.87



Atualmente, o cálculo da média na UFRN é uma média aritmética das notas obtidas em cada unidade. 



Você deve implementar um programa que tenha 3 funções. A primeira função deve receber como parâmetro qual o tipo de média que deve ser calculado ( 'A' para a média antiga e 'N' para a média nova) e as 3 notas do aluno e deverá retornar a média calculada. Para calcular a média essa função deverá chamar outra função de acordo com o parâmetro do tipo da média. Se o parâmetro for 'A' deverá fazer o cálculo antigo da média. Se for 'N' deverá fazer o cálculo novo da média.



Observações: as notas deverão conter duas casas decimais. 