#include <stdio.h>
#include <string.h>
int qtdsubstrings(char *a, char*b, int tama, int tamb){
  int aux=0,aux2,i,j,substring=0;
  //as duas strings são do mesmo tamanho
  if(tama == tamb){
    for(i = 0 ; i < tama ; i++){
      if(a[i] == b[i] || a[i] == b[i]+32 || a[i] == b[i]-32){
        aux++;
      }
    }
    if(aux == tama){
      return 1;
    }
    else
    return 0;
  }
  //a segunda é maior que a primeira
  if(tamb > tama){
    for(i = -1 ; i <= (tamb - tama) - 1 ; i++){
      aux = 1;
      aux2 = 1;
      for(j = 0 ; j < tama ; j++){
        if(a[j] != b[i+aux] && a[j]+32 != b[i+aux] && a[j]-32 != b[i+aux] ){
          aux2=0;
          continue;
        }
        aux++; 
      }
      if(aux2 == 1){
        substring++;
      }
    }
    return substring;
  }

}
int main() {
  char A[41],B[41];
  int tam_a,tam_b;
  
  fgets(A, 41, stdin);fgets(B, 41, stdin);
  tam_a = strlen(A)-1 ; tam_b = strlen(B)-1;
  //printf("%d %d",tam_a,tam_b);
  printf("%d",qtdsubstrings(A,B,tam_a,tam_b));

}