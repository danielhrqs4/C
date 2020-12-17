#ifndef FUNCAO_H
#define FUNCAO_H

void simulacao(double *S_0, double * I_0, double * R_0, double  h , double b, double k, double b_cenario1, double k_cenario2, double tempo_inicio_simulacao, int cenario, double retorno[4], double indice);

void dados_iniciais(FILE *exit_cenario_number);

void calcular_ctes(double *b, double N_b , double T_b , double S_b0 , double I_b0,double *k, double M_k,double N_k, double T_k);

typedef struct{
    double S_0, I_0, R_0, h; 
    double N_b, T_b, S_b0, I_b0, M_k, N_k, T_k;
    double b, k, t;
    double T_b_cenario1, T_k_cenario2;
    double b_cenario1, k_cenario2;
    double tempo_inicio_simulacao_cenario1,tempo_inicio_simulacao_cenario2;
}Dados;

void close_arq(FILE *arq1, FILE *arq2, FILE *arq3, FILE *arq4);
#endif