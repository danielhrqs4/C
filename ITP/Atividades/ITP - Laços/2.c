#include <stdio.h>
int main(){
    int n,x,y,soma;
    scanf("%d",&n);
    for(int i=0 ; i<n ;i++){
        soma = 0;
        scanf("%d &d",&x,&y);
        //soma os ímpares entre os números
        for(int j=x+1 ; j<y ; j++){
            if(j%2 != 0){
                soma += j;
            }
        }
        printf("%d\n",soma);
    }
    return 0;
}