#include <stdio.h>
int *bubble_sort (int vetor[], int n) {
    int k, j, aux;
    for (k = n - 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    for(int i = 0  ; i < n ; i++){
      printf("%d ",vetor[i]);
    } 
    printf("\n");
}

int main(){
    int qtdd_vetores;
    scanf("%d",&qtdd_vetores);
    int tamanhos[qtdd_vetores];
    //entrada de tamanho dos vetores
    for(int i = 0 ; i < qtdd_vetores; i++){
        scanf("%d",&tamanhos[i]);        
    }

    for(int i = 0 ; i < qtdd_vetores ; i++){
        int vetor[tamanhos[i]];
        for(int j = 0 ; j < tamanhos[i]; j++){
            scanf("%d",&vetor[j]);
        }
        bubble_sort(vetor,tamanhos[i]);
    }
  return 0;
}
//casos teste 
//3 4 2 3 3 22 7 42 81 12 67 12 19


