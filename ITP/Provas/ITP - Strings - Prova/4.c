#include <stdio.h>
#include <string.h>
int main(){
    char A[41],B[41];
    int tam_a,tam_b,i,j,k;
    //entrada
    fgets(A,41,stdin);fgets(B,41,stdin);
    //tamanho dos vetores
    tam_a = strlen(A)-1;
    tam_b = strlen(B)-1;
    //funcao
    if(tam_a == tam_b){
      for(i = 0 ; i < (tam_a + tam_b)/2; i++){
        printf("%c%c",A[i],B[i]);
      }
    }
    else if(tam_a > tam_b){
      for(i = 0 ; i < tam_b ; i++){
        printf("%c%c",A[i],B[i]);
      }
      for(i = tam_b ; i < tam_a ; i++){
        printf("%c",A[i]);
      }
    }
    else{
      for(i = 0 ; i < tam_a ; i++){
        printf("%c%c",A[i],B[i]);
      }
      for(i = tam_a ; i < tam_b ; i++){
        printf("%c",B[i]);
      }
    }
    return 0;
}