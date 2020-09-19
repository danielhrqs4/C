#include <stdio.h>
int main(){
    int vetor[9],vetor_2[9],N;
    for(int i= 1 ; i<9 ; i++){
        scanf("%d",&vetor[i]);
    }
    
    scanf("%d",&N);

    for(int i= 1 ; i<9 ; i++){
        if(i+N <= 8){
            vetor_2[i+N] = vetor[i]; 
        }
        else{
            vetor_2[i+N-8] = vetor[i];    
        }
    }
    for(int i= 1 ; i<9 ; i++){
        printf("%d ",vetor_2[i]);
    }  
    return 0;
}