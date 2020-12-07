#include <stdio.h>
#include "funcoes.h"

void simulacao0(double *end_S0, double *end_I0, double *end_R0, double h, double b, double k, FILE *saida){
  double x, y, z; //auxiliares para guardar valores do S.I.R
  
  x = *end_S0 - (h * b* (*end_S0) * (*end_I0));//Cálculo S
  y = *end_I0 + h*(b * (*end_S0) * (*end_I0) - k * (*end_I0));//Cálculo I
  z = *end_R0+ (h * k * (*end_I0));//Cálculo R
  //printa saida no terminal
  printf("%.5lf,%.5lf,%.7lf,", x, y, z);
  //printa a saída no canal de cominicação (arquivo .csv) referente ao cenário.
  fprintf(saida,"%.5lf,%.5lf,%.7lf,", x, y, z);
  //Salva o valor da variável já que a proxima interação (se existir) depende do valor anterior.
  *end_S0 = x;
  *end_I0 = y;
  *end_R0= z;
}

void simulacao1(double *end_S0, double *end_I0, double *end_R0, double h, double b, double k, double b_cenario1, double i, double tempo_inicio_simulacao, FILE *saida){
  double x, y, z; //auxiliares para guardar valors do S.I.R
  
  if(i <= tempo_inicio_simulacao){
    x = *end_S0 - (h * b * (*end_S0) * (*end_I0));//Cálculo S
    y = *end_I0 + h * (b * (*end_S0) * (*end_I0) - k * (*end_I0));//Cálculo I
    z = *end_R0 + (h * k * (*end_I0));//Cálculo R
    //printa saida no terminal
    printf("%.5lf,%.5lf,%.7lf,", x, y, z);
    //printa a saída no canal de cominicação (arquivo .csv) referente ao cenário.
    fprintf(saida,"%.5lf,%.5lf,%.7lf,", x, y, z);
    //Salva o valor da variável já que a proxima interação (se existir) depende do valor anterior.
    *end_S0 = x;
    *end_I0 = y;
    *end_R0= z;
  }
  else{
    x = *end_S0 - (h * b_cenario1 * (*end_S0) * (*end_I0));//Cálculo S
    y = *end_I0 + h * (b_cenario1 * (*end_S0) * (*end_I0) - k * (*end_I0));//Cálculo I
    z = *end_R0 + (h * k * (*end_I0));//Cálculo R
    //printa a saida no terminal
    printf("%.5lf,%.5lf,%.7lf,", x, y, z);
    //printa a saída no canal de cominicação (arquivo .csv) referente ao cenário.
    fprintf(saida,"%.5lf,%.5lf,%.7lf,", x, y, z);
    //Salva o valor da variável já que a proxima interação (se existir) depende do valor anterior.
    *end_S0 = x;
    *end_I0 = y;
    *end_R0= z;
  }
}

void simulacao2(double *end_S0, double *end_I0, double *end_R0, double h, double b, double k, double k_cenario2, double i, double tempo_inicio_simulacao, FILE *saida){
  double x, y, z; //auxiliares para guardar valors do S.I.R
  
  if(i <= tempo_inicio_simulacao){
    x = *end_S0 - (h * b * (*end_S0) * (*end_I0));//Cálculo S
    y = *end_I0 + h * (b * (*end_S0) * (*end_I0) - k * (*end_I0));//Cálculo I
    z = *end_R0 + (h * k * (*end_I0));//Cálculo R
    //printa a saida no terminal
    printf("%.5lf,%.5lf,%.7lf,", x, y, z);
    //printa a saída no canal de cominicação (arquivo .csv) referente ao cenário.
    fprintf(saida,"%.5lf,%.5lf,%.7lf,", x, y, z);
    //Salva o valor da variável já que a proxima interação (se existir) depende do valor anterior.
    *end_S0 = x;
    *end_I0 = y;
    *end_R0= z;
  }
  else{
    x = *end_S0 - (h * b * (*end_S0) * (*end_I0));//Cálculo S
    y = *end_I0 + h * (b * (*end_S0) * (*end_I0) - k_cenario2 * (*end_I0));//Cálculo I
    z = *end_R0 + (h * k_cenario2 * (*end_I0));//Cálculo R
    //printa a saida no terminal
    printf("%.5lf,%.5lf,%.7lf,", x, y, z);
    //printa a saída no canal de cominicação (arquivo .csv) referente ao cenário.
    fprintf(saida,"%.5lf,%.5lf,%.7lf,", x, y, z);
    //Salva o valor da variável já que a proxima interação (se existir) depende do valor anterior.
    *end_S0 = x;
    *end_I0 = y;
    *end_R0= z;
  }
}