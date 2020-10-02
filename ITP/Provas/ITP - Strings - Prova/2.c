#include <stdio.h>
#include <string.h>
  int checamaiuminu(char letra){
    int i;
    //maiuscula
    for(i=65 ; i <= 90 ; i++){
      if(letra == i)
        return 1;
    }
    //minuscula 
    for(i=97 ; i <= 122 ; i++){
      if(letra == i)
        return -1;
    }
    //espaço
    if(letra == 32){
      return 2;
    }
    //nenhum
    return 0;
  }
  
  char *iniciaismaiusculas(char * a , int tam){
  int i;
    if(checamaiuminu(a[0]) == -1){
      a[0] +=32;
    }  
    for(i = 1 ; i<tam ; i++){
      if(checamaiuminu(a[i-1]) == 1 || checamaiuminu(a[i-1]) == -1 ) {
        if(checamaiuminu(a[i]) == 1){
          a[i]+=32;
        }
      }
      if(checamaiuminu(a[i-1]) == 2){
        if(checamaiuminu(a[i]) == -1 ){
          a[i]-=32;
        }
      }
  }
  return a;

  }  
  int main(){
  char frase[61];
  int tamfrase;
  fgets(frase,61,stdin);
  tamfrase = strlen(frase)-1;

  printf("%s",iniciaismaiusculas(frase, tamfrase));


}
