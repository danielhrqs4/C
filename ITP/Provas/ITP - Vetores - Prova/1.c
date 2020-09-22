#include <stdio.h>
#include <math.h>
int main(){
    int t,produto = 0;
    float somavet_1=0,somavet_2=0;
    
    scanf("%d", &t);
    
    int vetor_1[t],vetor_2[t]; 

    for(int i = 0 ; i < t ; i++ ){
        scanf("%d",&vetor_1[i]);
    }

     for(int i = 0 ; i < t ; i++ ){
        scanf("%d",&vetor_2[i]);
    }
    
    for(int i = 0 ; i < t ; i++ ){
        produto += (vetor_1[i] * vetor_2[i]); 
        somavet_1 += (vetor_1[i] * vetor_1[i]);
        somavet_2 += (vetor_2[i] * vetor_2[i]);
    }

    somavet_1 = sqrt(somavet_1);
    somavet_2 = sqrt(somavet_2);

    printf("%d %.2f %.2f",produto,somavet_1,somavet_2 );
    return 0;
}