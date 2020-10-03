#include <stdio.h>
void primo(int valor){
    if(valor == 2 || valor == -2){
      printf("2 eh primo\n");
    }
    else if(valor == 1 || valor == -1 || valor == 0){
      printf("%d nao eh primo\n",valor);
    }
    else{
    for(int i = 2 ; i < valor ; i++){
        if(valor % i == 0){
            printf("%d nao eh primo\n",valor);
            return;
        }
    }
    printf("%d eh primo\n",valor);
    } 
}
int main(){
    int N,x;
    scanf("%d",&N);
    for(int i=0 ; i < N ; i++){
        scanf("%d",&x);
        primo(x);
    }
}