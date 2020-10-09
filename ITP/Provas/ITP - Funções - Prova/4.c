#include <stdio.h>
#include <math.h>
int mdc(int num1,int num2,int num3){
    int maxdc = 1,menor = num1;
    //acha o menor valor
    if(num2 < menor){
      menor = num2;
    }
    else if(num3 < menor){
      menor = num3;
    }
    //calcular o mdc
    for(int i = 2 ; i <= menor ; i++ ){
      if((num1 / i != 0 && num1 % i == 0) && (num2 / i != 0 && num2% i == 0) && (num3 / i != 0 && num3 % i == 0)){
        maxdc *= i;
      }
    }
    return maxdc;  
}
int triplapitagorica(int num1,int num2,int num3){
    //se o mdc é igual a um e é uma tripla pitagórica
    if(mdc(num1,num2,num3) == 1 && (pow(num1,2) == pow(num2,2) + pow(num3,2) || pow(num2,2) == pow(num1,2) + pow(num3,2) || pow(num3,2) == pow(num1,2) + pow(num2,2))){
      printf("tripla pitagorica primitiva");
    }
    else if (pow(num1,2) == pow(num2,2) + pow(num3,2) || pow(num2,2) == pow(num1,2) + pow(num3,2) || pow(num3,2) == pow(num1,2) + pow(num2,2)){
      printf("tripla pitagorica");
    }
    else{
      printf("tripla");
    }  
}
int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    //triplapitagorica(num1,num2,num3);
    triplapitagorica(num1,num2,num3);  
    return 0;
}