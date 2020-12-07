#ifndef FUNCAO_H
#define FUNCAO_H

void simulacao0(double *S_0, double *I_0, double *R_0, double h, double b, double k, FILE *saida);
void simulacao1(double *S_0, double *I_0, double *R_0, double h, double b, double k, double b_cenario1 , double i, double tempo_inicio_simulacao,FILE *saida);
void simulacao2(double *S_0, double *I_0, double *R_0, double h, double b, double k, double k_cenario2 , double i, double tempo_inicio_simulacao, FILE *saida);

#endif