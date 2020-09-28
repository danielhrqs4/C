#include <stdio.h>
// checa se é caractere alfabetico ; maiusculo ou minusculo
int checa(char b){
  for(int i=65; i<=90 ; i++){
    if(b == i)
      return 1;
  }
  for(int i=97; i<=122 ; i++){
    if(b == i)
      return 0;
  }
  return -1;    
}

int main(){
    char a[100];
    int i=0,recebe;
    
    //leitura
    while(1){
        scanf(" %c",&a[i]);
        if(a[i] == 64){
            break;
        }
        i++;
    }
    //printa 
    for(int k = 0 ; k < i ; k++){
      recebe = checa(a[k]);
      if(recebe == 1){
        printf("%c ",a[k]+32);
      }
      else if(recebe == 0){
        printf("%c ",a[k]-32);
      }
    }
}