#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes.h"

int main() { 
  //arquivos de entrada e saida de dados
  FILE *entry_cenario,*exit_cenario0, *exit_cenario1, *exit_cenario2;
  Dados cenario;
  int aux_cenario;
  double aux1,aux2,aux3;
  double retorno[4];
  
  //Importa os arquivos de entrada e de saida de dados.
  entry_cenario = fopen("entrada.csv","r");
  exit_cenario0 = fopen("saida0.csv","w");
  exit_cenario1 = fopen("saida1.csv","w");
  exit_cenario2 = fopen("saida2.csv","w");

  //Reporta erro ao importar o arquivo.
  if(entry_cenario == NULL || exit_cenario0 == NULL || exit_cenario1 == NULL || exit_cenario2 == NULL){
    printf("Erro ao importar pelo menos um dos arquivos.\n");
    return -2;
  }
  
  //Se conseguir importar os arquivos, lê as variáveis do arquivo 'entrada.csv'(responsáveis pelos cálculos no cenário 0).
  fscanf(entry_cenario, "%lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf", &cenario.S_0, &cenario.I_0, &cenario.R_0, &cenario.h, &cenario.N_b, &cenario.T_b, &cenario.S_b0, &cenario.I_b0, &cenario.M_k, &cenario.N_k, &cenario.T_k, &cenario.t, &cenario.T_b_cenario1, &cenario.T_k_cenario2, &cenario.tempo_inicio_simulacao_cenario1, &cenario.tempo_inicio_simulacao_cenario2);
  
  aux1 = cenario.S_0; aux2 = cenario.I_0; aux3 = cenario.R_0;
  
  //Cálculo das constantes.
  calcular_ctes(&cenario.b, cenario.N_b , cenario.T_b , cenario.S_b0 , cenario.I_b0, &cenario.k, cenario.M_k, cenario.N_k, cenario.T_k);

  //Calcula as constantes do b (muda após determinado tempo no cenário 1) e k(muda após determinado tempo no cenário 2)
  calcular_ctes(&cenario.b_cenario1,  cenario.N_b,  cenario.T_b_cenario1,  cenario.S_b0,  cenario.I_b0,  &cenario.k_cenario2, cenario.M_k,  cenario.N_k, cenario.T_k_cenario2);
  
  //Converter tempo de dias para horas.´
  cenario.t *= 24;
  
  //Prints padrão do início de cada saída.
  fprintf(exit_cenario0,"%.0lf,%.0lf,%.0lf,%.0lf\n", cenario.S_0, cenario.I_0, cenario.R_0, 0.0);
  fprintf(exit_cenario1,"%.0lf,%.0lf,%.0lf,%.0lf\n", cenario.S_0, cenario.I_0, cenario.R_0, 0.0);
  fprintf(exit_cenario2,"%.0lf,%.0lf,%.0lf,%.0lf\n", cenario.S_0, cenario.I_0, cenario.R_0, 0.0);
  
  //Execução do cenário 0
  aux_cenario = 0;
  for(double i = cenario.h ; i < cenario.t + cenario.h ; i += cenario.h){
  //Passa-se todos os parâmetros e dentro da função simulação utilizam-se os necessários para cada cenário.
  simulacao(&cenario.S_0, &cenario.I_0, &cenario.R_0, cenario.h , cenario.b, cenario.k, cenario.b_cenario1, cenario.k_cenario2, cenario.tempo_inicio_simulacao_cenario1, aux_cenario, retorno, i);
    fprintf(exit_cenario0, "%.5lf,%.5lf,%.7lf,%.1lf\n", retorno[0], retorno[1], retorno[2], retorno[3]);
  }
  
  //Execução do cenário 1
  aux_cenario = 1;
  //recupera os valores iniciais de S.I.R
  cenario.S_0 = aux1; cenario.I_0 = aux2; cenario.R_0 = aux3;
  for(double i = cenario.h ; i < cenario.t + cenario.h ; i += cenario.h){

  simulacao(&cenario.S_0, &cenario.I_0, &cenario.R_0, cenario.h , cenario.b, cenario.k, cenario.b_cenario1, cenario.k_cenario2, cenario.tempo_inicio_simulacao_cenario1, aux_cenario, retorno, i);
    fprintf(exit_cenario1, "%.5lf,%.5lf,%.7lf,%.1lf\n", retorno[0], retorno[1], retorno[2], retorno[3]);
  }

  //Execução do cenário 2
  aux_cenario = 2;
  //recupera os valores iniciais de S.I.R
  cenario.S_0 = aux1; cenario.I_0 = aux2; cenario.R_0 = aux3;
  for(double i = cenario.h ; i < cenario.t + cenario.h ; i += cenario.h){
  simulacao(&cenario.S_0, &cenario.I_0, &cenario.R_0, cenario.h , cenario.b, cenario.k, cenario.b_cenario1, cenario.k_cenario2, cenario.tempo_inicio_simulacao_cenario2, aux_cenario, retorno, i);
    fprintf(exit_cenario2, "%.5lf,%.5lf,%.7lf,%.1lf\n", retorno[0], retorno[1], retorno[2], retorno[3]);
  }
  //Fechamento dos arquivos
  close_arq(entry_cenario, exit_cenario0, exit_cenario1, exit_cenario2);

  return 0;
} 