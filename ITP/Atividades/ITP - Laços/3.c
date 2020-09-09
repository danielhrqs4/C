#include <stdio.h>
int main(){
    int pares=0,impares=0,pos=0,neg=0,valor=0;
    for(int i=0 ; i<5; i++){
        scanf("%d",&valor);
        if(valor%2 == 0){
            pares++;
        }
            else{
                impares++;
            }
        
        if(valor>0){
            pos++;
        }
        if(valor<0){
            neg++;
        }
    }
    printf("%d valores pares\n%d valores impares\n%d valores positivos\n%d valores negativos",pares,impares,pos,neg);
    
    
    return 0;
}