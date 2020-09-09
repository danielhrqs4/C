#include <stdio.h>
int main(){
    int idade,cont=0;
    for(int i=0 ; i<6 ; i++){
        scanf("%d",&idade);
        if(idade > 18){
            cont++;
        }
    }
    printf("%d",cont);
    return 0;
}