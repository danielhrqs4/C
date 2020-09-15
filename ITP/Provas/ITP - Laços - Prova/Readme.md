#1 - Somando o intervalo
 Implemente uma função que recebe dois valores inteiros, x e y , e retorna a soma dos números no intervalo [x, y].
***
#2 - Valores em um intervalo 
Escreva um programa para listar os valores inteiros de um intervalo. O programa deve ler dois valores inteiros, que definem os limites do intervalo (mínimo e máximo), e imprimir a sequência dos valores entre os limites. Se os limites dados pelo usuário foram iguais ou consecutivos, o programa deve imprimir "intervalo vazio". Caso contrário, o programa deve imprimir em ordem crescente todos os números inteiros entre eles (excluindo os próprios valores dados). Vale ressaltar que o usuário pode informar o limite mínimo e depois o máximo quanto o contrário.
#3 - Crescente, decrescente ou nenhum dos dois
Você foi contratado pelo Banco "Empréstimo Fácil" para implementar um programa que fará parte do serviço de recomendações financeiras aos clientes. Se uma aplicação tiver uma tendência crescente, é porque vale a pena investir. Se tiver uma tendência decrescente, é preciso retirar os investimentos. Se não houver uma tendência clara, a recomendação é aguardar um pouco.
***
Você deve fazer inicialmente um protótipo da aplicação, escrevendo um programa que lê uma sequência de valores numéricos e imprime 1 se os valores lidos estiverem em ordem crescente, -1 se estiverem em ordem decrescente ou 0 caso não tenham uma ordem específica. Na classificação, considere uma "ordem estrita". Nesse tipo de relação de ordem, a sequência de valores 2.3, 4.5, 4.5 e 6.1 não é considerada como em ordem crescente, pois o terceiro valor (4.5) não é estritamente maior que o segundo (4.5) (a título de informação, caso fosse considera uma "ordem parcial", a sequência exemplificada seria considerada em ordem crescente).

A entrada de dados constituirá de uma valor inteiro N, sendo obrigatoriamente N >= 2, seguido de N valores reais. A saída de dados constituirá unicamente de um número inteiro, entre os valores 1, -1 ou 0.

Obs: Não imprimam mensagens do tipo "Entre com o número de valores a ser lido:" ou similares.
***
#4 - Hexadecimal
Ao inspecionar páginas web no seu navegador, você vê que as cores de texto ou de fundo são normalmente codificadas em hexadecimal. Você possui uma paleta de cores para usar no seu próximo projeto, mas elas estão todas no formato RGB com valores decimais, ou seja cada cor possui três valores (red, green e blue) no intervalo [0-255].

Escreva então um programa para transformar toda a sua paleta em valores hexadecimais. Seu programa deve ler várias vezes uma sequência de três valores inteiros. A cada leitura, o valor correspondente em haxadecimal deve ser impresso (um por linha). O programa deve parar quando algum dos valores lidos for negativo.

Obs: Não imprimam mensagens do tipo "Digite os valores:" ou similares.