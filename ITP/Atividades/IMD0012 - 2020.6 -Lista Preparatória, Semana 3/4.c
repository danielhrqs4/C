#include <stdio.h>
int main(){
    int vetor[9],vetor_2[9],N,aux;
    for(int i=1 ; i<9 ; i++){
    scanf("%d",&vetor[i]);
    }
    
    scanf("%d",&N);
    aux = 8-N; 

    for(int i=1 ; i<=N ; i++){
        vetor_2[i] = vetor[aux+i];
    }   
    for(int i=9 ; i>N ; i--){
        vetor_2[i] = vetor[i-N]; 
    }
    for(int k = 1; k<9 ; k++){
        printf("%d ",vetor_2[k]);
    }
    return 0;
}