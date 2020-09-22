#include <stdio.h>
#include <math.h>
int main(){
    float vetor[10],soma_vetor=0,media,guarda_som=0,desvio_pdr;

    for(int i = 0 ; i < 10 ; i++){
        scanf("%f",&vetor[i]);
        soma_vetor += vetor[i];
    }

    media = soma_vetor / 10;

    for(int i = 0 ; i < 10 ; i++){
        guarda_som += pow(vetor[i]-media,2);    
    }

    desvio_pdr = sqrt(guarda_som / 10);

    printf("%.2f %.2f ",media,desvio_pdr); 
    
    return 0;
}