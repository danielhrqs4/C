#include <stdio.h>
#include <string.h>
void crescente(int vet[5]){
  int troca,i,j;
  for(i = 5-1; i > 0 ; i--){
    for (j = 0; j < i ; j++){
      if(vet[j+1]<vet[j]){
          troca = vet[j];
          vet[j] = vet[j+1];
          vet[j+1] = troca;
      }    
    }   
  }
  for(i = 0; i < 5 ; i++){
    printf("%d ",vet[i]);
  }
  printf("\n"); 
}

void decrescente(int vet[5]){
  int i,troca,j;
  for(i = 5-1; i > 0 ; i--){
    for (j = 0; j < i ; j++){
      if(vet[j]<vet[j+1]){
          troca = vet[j];
          vet[j] = vet[j+1];
          vet[j+1] = troca;
      }    
    }   
  }
  for(i = 0; i < 5 ; i++){
    printf("%d ",vet[i]);
  }
  printf("\n"); 
}

int main(){
    int vetor[5],vetorclone[5];
    int i;
    for(i = 0 ;i < 5 ; i++){
      scanf("%d",&vetor[i]);
      vetorclone[i] = vetor[i];
    }
    crescente(vetor);
    decrescente(vetor);
    for(i = 0 ;i < 5 ; i++){
      printf("%d ",vetorclone[i]);
    }
  return 0;
}
  
