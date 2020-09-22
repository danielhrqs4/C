#include <stdio.h>
int main(){
    int tam,contador=0,igual;
    
    scanf("%d",&tam);
    
    int vetor[tam];
    
    for(int i = 0 ; i < tam ; i++){
        scanf("%d",&vetor[i]);
    }

    for(int i = 0 ; i < tam-1 ; i++){
        igual = 0;
        for(int j = i+1 ; j < tam ; j++){
            if(vetor[i] == vetor[j]){
                igual++;   
            }
        }
        if(igual == 1){
            contador++;
        }
    }
    printf("%d",contador);
}