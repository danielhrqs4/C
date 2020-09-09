#include <stdio.h>
int main(){
    char a,b;
    int dif;
    scanf("%c %c",&a,&b);
    dif = a-b;
    switch (dif)
    {
    case 0:  
            printf("Caracteres %c e %c iguais",a,b);     
    default:
        if(dif<0){
            printf("Caractere %c antecede %c",a,b);
        }
        if(dif>0){
            printf("Caractere %c antecede %c",b,a);
        }
    }
    return 0;
}