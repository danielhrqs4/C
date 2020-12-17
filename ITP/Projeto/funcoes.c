#include <stdio.h>
#include "funcoes.h"

/** 
 * Calcula os valores S.I.R
 * @param[in] *S_0, * I_0, * R_0,  h , b, k, b_cenario1, k_cenario2, tempo_inicio_simulacao, int cenario, retorno[4], indice
*/
void simulacao(double *S_0, double * I_0, double * R_0, double  h , double b, double k, double b_cenario1, double k_cenario2, double tempo_inicio_simulacao, int cenario, double retorno[4], double indice){
  if (cenario == 0 || (cenario == 1 && indice < tempo_inicio_simulacao) || (cenario == 2 && indice < tempo_inicio_simulacao)){
    retorno[0] = *S_0 - (h * b * (*S_0) * (*I_0));//Cálculo S
    retorno[1] = *I_0 + h * (b * (*S_0) * (*I_0) - k * (*I_0));//Cálculo I
    retorno[2] = *R_0 + h * k * (*I_0);//Cálculo R
    retorno[3] = indice;
    //Salva o valor da variável já que a proxima interação (se existir) depende do valor anterior.
    *S_0 = retorno[0]; 
    *I_0 = retorno[1];
    *R_0= retorno[2];
  }
  else{
    if (cenario == 1){
      retorno[0] = *S_0 - (h * b_cenario1 * (*S_0) * (*I_0));//Cálculo S
      retorno[1] = *I_0 + h * (b_cenario1 * (*S_0) * (*I_0) - k * (*I_0));//Cálculo I
      retorno[2] = *R_0 + h * k * (*I_0);//Cálculo R
      retorno[3] = indice;
      //Salva o valor da variável já que a proxima interação (se existir) depende do valor anterior.
      *S_0 = retorno[0]; 
      *I_0 = retorno[1];
      *R_0= retorno[2];
    }
    else{
      retorno[0] = *S_0 - (h * b * (*S_0) * (*I_0));//Cálculo S
      retorno[1] = *I_0 + h * (b * (*S_0) * (*I_0) - k_cenario2 * (*I_0));//Cálculo I
      retorno[2] = *R_0 + h * k_cenario2 * (*I_0);//Cálculo R
      retorno[3] = indice;
      //Salva o valor da variável já que a proxima interação (se existir) depende do valor anterior.
      *S_0 = retorno[0]; 
      *I_0 = retorno[1];
      *R_0= retorno[2];
    }  
  }
}

/** 
 * Calcula as constantes b e k.
 * @param[in] *b, N_b , T_b , S_b0 , I_b0, *k, M_k N_k, T_k.
*/  
void calcular_ctes(double *b, double N_b , double T_b , double S_b0 , double I_b0, double *k, double M_k,double N_k, double T_k){
  *b = N_b / (T_b * S_b0 * I_b0);
  *k = M_k / (N_k * T_k);
}

/** 
 * Converte o tempo de simulação de dias para horas.
 * @param[in] *time_1, *time_2 , *time_3.
*/  

void close_arq(FILE *arq1, FILE *arq2, FILE *arq3, FILE *arq4){
  fclose(arq1);
  fclose(arq2);
  fclose(arq3);
  fclose(arq4);
}