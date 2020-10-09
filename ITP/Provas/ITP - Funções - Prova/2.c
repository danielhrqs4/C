#include <stdio.h>
int numperfeito(int num){
    int qtd_divisores = 0,soma_divisores = 0,primeiro;
    //soma os divisores 
    for (int i = 1 ; i < num ; i++){
      if(num % i == 0)
        soma_divisores += i;
    }
    //achar o primeiro divisor(para o print)
      for (int i = 1 ; i < num ; i++){
        if(num % i == 0){
          primeiro = i;
          break;
        }     
    }
    //checa se é perfeito
    if(soma_divisores == num){
      printf("%d = ",num);
      for(int i = 1 ; i < num ; i++){
        if(num % i == 0 ){
          if(i == primeiro){
            printf("%d ",i);
          }
          else
            printf("+ %d ",i);
        }
      }
    }
    else{
        printf("%d nao eh perfeito",num);
    }
}
int main(){
    int numero;
    scanf("%d",&numero);
    numperfeito(numero);
    return 0;    
}