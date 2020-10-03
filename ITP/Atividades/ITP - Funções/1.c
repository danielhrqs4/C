#include <stdio.h>

int main(void) {
int x,p,clonex,i=0,
int aux =10,digitos=0;

scanf("%d %d",&x,&p);
clonex = x;

//descubro a quantidade de algarismos
while(1){
    clonex /= 10;
    if(clonex != 0){
        digitos++;
    }
    if(clonex == 0 ){
        digitos++;
        break;
    }
    
}

for(int i = 0 ; i < digitos-2 ; i++){
    aux = aux * 10 ;
}

for(int  i = 0 ; i < digitos - p - 1 ; i++){
    clonex = clonex % aux ;
    aux /= 10;
}
clonex /= aux;

printf("%d",clonex);


