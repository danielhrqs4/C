#include <stdio.h>
int main(){
    int n,soma=0;
    scanf("%d",&n);
    //em uma divisão por 10 o resto sempre será o último dígito
    while(n != 0){
        soma += n%10;
        n /= 10;
    }
    printf("%d",soma);  
    return 0;
}