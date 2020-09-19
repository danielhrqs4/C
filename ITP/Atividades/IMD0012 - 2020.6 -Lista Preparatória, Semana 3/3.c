#include <stdio.h>
int main(){
    int tam1,tam2,i,j,var,troca;
    scanf("%d %d",&tam1,&tam2);
    var=tam1+tam2;
    int vet_1[tam1],vet_2[tam2],vet_juncao[var];
    //ler e colocar no vetor juncao
    for (int i=0 ; i<tam1 ; i++){
        scanf("%d",&vet_1[i]);
        vet_juncao[i] = vet_1[i];
    }
    for (int i=0 ; i<tam2 ; i++){
        scanf("%d",&vet_2[i]);
        vet_juncao[i+tam1] = vet_2[i];
    }
    //bubble sort
    for(i = var-1; i > 0 ; i--){
        for (j = 0; j < i ; j++){
            if(vet_juncao[j+1]<vet_juncao[j]){
                troca = vet_juncao[j];
                vet_juncao[j] = vet_juncao[j+1];
                vet_juncao[j+1] = troca;
            }    
        }   
    }
    //printar 
    for (int i=0 ; i<var ; i++){
        printf("%d ",vet_juncao[i]);    
    }
    return 0;
}