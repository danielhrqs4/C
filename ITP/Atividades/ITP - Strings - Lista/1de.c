#include <stdio.h>
int tamanho(char a[]){
  int i=0,count=0;
  while (1){
    if(a[i] != '\0')
      count ++;
    else 
      return count;
    i++;
  }
}
int palindromo (char palavra[], int tamanho){
    int i,j;
    for(i=0,j = tamanho-1 ; i < j ; i++,j--){
        if(palavra[i] != palavra[j])
            return 0;
    }
    return 1;
}
int main(){
    char a[100];
    int recebe,tam;
    scanf("%s",a);
    tam = tamanho(a);
    recebe = palindromo(a,tam);
    recebe == 1 ? printf("%s é um palíndromo",a) : printf("%s não é um palíndromo",a);
}