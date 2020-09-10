#include <stdio.h>
int main(){
    int registro,n,nclone,soma=0,cont=0,i=0;
   
    scanf("%d",&n);
    nclone =n;
    //contar a quantidade de algarismos do número(tamanho do vetor)
    while(n != 0){
        n /= 10;
        cont++;
    }
    int num[cont];
   //separar os algarismos e colocar no vetor
    while(nclone != 0){
    registro = nclone%10;
    num[i] = registro;
    nclone /= 10;
    i++;
   }

   //imprimir o vetor de trás para frente
    for(int j=cont-1 ; j>=0 ; j-- ){
       printf("%d\n",num[j]);
    return 0;
   }   
}