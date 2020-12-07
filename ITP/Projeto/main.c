#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() { 
  //arquivos de entrada e saida de dados
  FILE *entry_cenario0, *entry_cenario1, *entry_cenario2, *exit_cenario0, *exit_cenario1, *exit_cenario2;
  double S_0, I_0, R_0, h; 
  double N_b, T_b, S_b0, I_b0, M_k, N_k, T_k;
  double b, k, t;
  double T_b_cenario1, T_k_cenario2;
  double b_cenario1, k_cenario2;
  double tempo_inicio_simulacao;

  //Importa os arquivos de entrada e de saida de dados.
  entry_cenario0 = fopen("entrada0.csv","r");
  entry_cenario1 = fopen("entrada1.csv","r");
  entry_cenario2 = fopen("entrada2.csv","r");
  exit_cenario0 = fopen("saida0.csv","w");
  exit_cenario1 = fopen("saida1.csv","w");
  exit_cenario2 = fopen("saida2.csv","w");

  //Reporta erro ao importar o arquivo.
  if(entry_cenario0 == NULL || entry_cenario1 == NULL || entry_cenario2 == NULL || exit_cenario0 == NULL || exit_cenario1 == NULL || exit_cenario2 == NULL){
    printf("Erro ao importar pelo menos um dos arquivos.\n");
    return -2;
  }
  
  //Se conseguir importar os arquivos, lê as variáveis do arquivo 'entrada0.csv'(responsáveis pelos cálculos no cenário 0).
  fscanf(entry_cenario0, "%lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf", &S_0, &I_0, &R_0, &h, &N_b, &T_b, &S_b0, &I_b0, &M_k, &N_k, &T_k, &t);

  //Conversão do intervalo de tempo total da execução do loop(t) de dias para horas.
  t *= 24;
  
  //Cálculo das constantes(para todos os cenários), após um tempo determinado, nos cenários 1 e 2 essas constantes mudarão.
  b = N_b / (T_b * S_b0 * I_b0);
  k = M_k / (N_k * T_k);

  //Coloca os dados S.I.R iniciais em cada arquivo de saida dos cenários (dados esses que não mudam quando muda-se o cenário).
  
  fprintf(exit_cenario0,"%0.lf,%0.lf,%0.lf,0\n", S_0, I_0, R_0);
  printf("\n");
  fprintf(exit_cenario1,"%0.lf,%0.lf,%0.lf,0\n", S_0, I_0, R_0);
  printf("\n");
  fprintf(exit_cenario2,"%0.lf,%0.lf,%0.lf,0\n", S_0, I_0, R_0);
  printf("\n");
    
  //Cenário 0
  for(double i = h ; i < t+h ; i += h){
    //função para calcular o S.I.R de cada intevalo de tempo.
    simulacao0(&S_0, &I_0, &R_0, h, b, k, exit_cenario0);
    //printa o intervalo de tempo decorrido na simulação.
    fprintf(exit_cenario0,"%.1lf\n", i);
    printf("%.1lf\n",i);
  }
  printf("\n");
  printf("Fim da simulação do cenário 0\n");
  //Lê as variáveis do arquivo 'entrada1.csv'(cenário 1).
  fscanf(entry_cenario1, "%lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf", &S_0, &I_0, &R_0, &h, &N_b, &T_b, &S_b0,&I_b0, &M_k, &N_k, &T_k, &t, &T_b_cenario1, &tempo_inicio_simulacao);

  //Conversão do intervalo de tempo total da execução do loop(t) de dias para horas.
  t *= 24;
  //Cálculo do valor de b que só muda no cenário1(após determinado tempo)
  b_cenario1 = N_b / (T_b_cenario1 * S_b0 * I_b0); 
  //Cenário 1

  for(double i = h ; i < t+h ; i += h){
    //função para calcular o S.I.R de cada intevalo de tempo.
    simulacao1(&S_0, &I_0, &R_0, h, b, k, b_cenario1, i, tempo_inicio_simulacao, exit_cenario1);
    //printa o intervalo de tempo decorrido na simulação.
    fprintf(exit_cenario1,"%.1lf\n", i);
    printf("%.1lf\n",i);
  }
  printf("\n");
  printf("Fim da simulação do cenário 1\n");
  //Lê as variáveis do arquivo 'entrada2.csv'(cenário 2).
  fscanf(entry_cenario2, "%lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf , %lf, %lf", &S_0, &I_0, &R_0, &h, &N_b, &T_b, &S_b0, &I_b0, &M_k, &N_k, &T_k, &t, &T_k_cenario2, &tempo_inicio_simulacao);
  
  //Conversão do intervalo de tempo total da execução do loop(t) de dias para horas.
  t *= 24;
  //Cálculo do valor de k que só muda no cenário2(após determinado tempo).
  k_cenario2 = M_k / (N_k * T_k_cenario2);
  //Cenário 2

  for(double i = h ; i < t+h ; i += h){
    //função para calcular o S.I.R de cada intevalo de tempo.
    simulacao2(&S_0, &I_0, &R_0, h, b, k, k_cenario2, i, tempo_inicio_simulacao, exit_cenario2);
    //printa o intervalo de tempo decorrido na simulação.
    fprintf(exit_cenario2,"%.1lf\n", i);
    printf("%.1lf\n",i);
  }

  //fechamento dos arquivos de entrada e saída
  fclose(entry_cenario0);
  fclose(entry_cenario1);
  fclose(entry_cenario2);
  fclose(exit_cenario0);
  fclose(exit_cenario1);
  fclose(exit_cenario2);

  return 0;
} 

