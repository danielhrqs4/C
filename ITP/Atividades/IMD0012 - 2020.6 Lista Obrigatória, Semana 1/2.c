#include <stdio.h>
int main(){
    float a,b,v;
    printf("Entre com os operandos:\n");
    scanf("%f %f",&a,&b);
    if(a>0 && b<0){
        v = a*b;
    }
    else{
        if(a<0){
            v = a+b;   
        }
        else{
            v= a/b;
        }
    }
    printf("Valor de V=%1.f",v);  
    return 0;
}