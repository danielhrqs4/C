#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int maior=a,menor=a;
    if(a==b && a==c && b==c){
        printf("Os três números são iguais");
    }
    else{
        if(b>maior){
            maior =b;
        }
        if(c>maior){
            maior =c;
        }
        if(b<menor){
            menor =b;
        }
        if(c<menor){
            menor=c;
        }
        printf("O menor número é %d e o maior número é %d",menor,maior);
    }
    return 0;
}