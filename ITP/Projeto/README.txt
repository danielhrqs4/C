//////// PROJETO ITP - 246M12 ////////
//////// ALUNOS: DANIEL HENRIQUES E GUILHERME CHAVES ////////
//////// PROFESSOR: ANDRÉ CAMPOS ////////

-- Projeto: Simulações Epidemiológicas

	O objetivo do projeto da matéria ITP do semestre 2020.1 é analisar e demonstrar casos de modelos epidemiológicos utilizando o SIR - Suscetível, Infectado, Removido - que é um MEC - Modelos Epidemiológicos Computacionais -.
	No primeiro Checkpoint, demonstramos todos os entregáveis necessários. Desde a implementação do modelo SIR com leitura e saída nos arquivos correspondentes, além da saída também no terminal. Após a apresentação ao Professor Doutor André Campos, listamos algumas modificações necessárias para que chegássemos a um resultado satisfatório: Implementação de um modelo struct para qual deixasse o código mais "limpo" e automatizado; Alteração das funções para somente uma função que encaixasse nos três casos; Modularização do nosso código.
	No segundo e último Checkpoint, realizamos as mudanças pendentes e necessárias que listamos no último checkpoint. Não somente para o primeiro cenário, mas como também para os outros dois cenários. Além da construção, via Excell, dos gráficos dos três cenários.
		
-- Pré-requisitos

	Itens necessários: IDE a escolha que suporte a linguagem C; Terminal do SO utilizado com GCC instalado; Microsoft Excell.
	Nós, Daniel e Guilherme, utilizamos para a construção do projeto a IDE Repl.it. Para qual trabalhássemos de forma conjunta ao mesmo tempo no nosso projeto. Onde, em sua totalidade, utilizamos da linguagem C.
	Para compilar utilizamos o GNU Compiler Colletion (GCC), do próprio terminal do Linux (ubuntu). E para gerar os gráficos o programa Excell, da Microsoft.
	
-- Guia de Utilização

	O arquivo de entrada é composto de 16 dados necessários em uma ordem específica para o funcionamento correto do nosso simulador. Para alterá-lo basta abrir nosso projeto em uma IDE, e modificar os dados do arquivo "entrada.csv" na seguinte ordem: número de pessoas suscetíveis inicial, número de pessoas infectados inicial, número de pessoas removidas inicial, pequeno intervalo de tempo, número de pessoas suscetíveis que se infectaram em um intervalo de tempo T_b, intervalo de tempo T_b, número de pessoas suscetíveis no início da observação, número de pessoas infectadas no início da observação, indivíduos m_k recuperados, n_k indivíduos, intervalo de tempo T_k, tempo t, intervalo de tempo T_b especial do cenário 1, intervalo de tempo T_k especial do cenário 2, tempo inicio da segunda parte do cenário 1 e tempo inicio da segunda parte do cenário 2. Se quiser criar um novo do início, é necessário separá-los por vírgulas.
	Após baixar o arquivo compactado do nosso projeto, é necessário extraí-lo para uma pasta a sua escolha. Abra a pasta do nosso projeto no terminal e execute o comando "gcc -o 'nomedoexecutável' funcoes.c main.c" para criar um executável com um nome a sua escolha do simulador. Após isso é somente executá-lo pelo próprio terminal com o comando ./"nomedoexecutável".
	Com as três simulações pedidas na tarefa, nosso projeto consta de três saídas diferentes com seus respectivos gráficos em formato jpg.
	Como construímos os gráficos:
	
		1º passo: Abrir qualquer arquivo saída.csv no Excell (botão direito do mouse, abrir com, Microsoft Excell);
		2º passo: É necessário formatar o arquivo, pressione control + l, clique na aba "substituir";
		3º passo: Em localizar, coloque o caractere "," e substitua pelo caractere ";". Clique em substituir tudo;
		4º passo: Pressione control + l novamente, clique na aba "substituir", e substitua o caractere "." por ",". Clique em substituir tudo;
		5º passo: Selecione a coluna A inteira, vá em dados, texto para colunas, selecione "delimitado" e avance. Em delimitadores, selecione "ponto e vírgula" e clique em concluir;
		6º passo: Selecione as colunas A, B e C e insira o gráfico de linhas;
		7º passo: Após aparecer o gráfico, clique na opção "filtro de gráfico" a direita do gráfico;
		8º passo: Selecione "selecionar dados...", clique em "série 1". Após isso clique em editar do lado direito em "rótulos do eixo horizontal (categorias)";
		9º passo: Selecione o intervalo da coluna D, e clique em "OK";
		10º passo: Altere o título para o cenário correspondente e mude o nome das séries para S, I e R.
	Faça bom uso do nosso Simulador!! :)
	
