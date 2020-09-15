#include <stdio.h>
int main(){
    int x,y,soma=0;
    scanf("%d %d",&x,&y);
    for(int i=x; i<=y;i++){
        soma += i;
    }
    printf("%d\n",soma);
    return 0;
}