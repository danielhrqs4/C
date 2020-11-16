#include <stdio.h>
#include <string.h>
void inverte(char *num){
    int aux = strlen(num)-1;
    char aux2;
    for(int i = 0 ; i < (strlen(num)/2 ) ; i++){
      aux2 = num[i];
      num[i] = num[i+aux];
      num[i+aux] = aux2;
      aux -= 2;  
    }
    printf("%s",num);
}

int main(){
    char numero [100];
    scanf("%[^\n]", numero);
    inverte(numero);
    return 0;
}