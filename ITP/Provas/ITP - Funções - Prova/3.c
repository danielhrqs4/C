#include <stdio.h>
#include <string.h>
void limpabuffer(void){
  char c;
  while ((c = getchar()) != '\n' && c != EOF);
}

char* cifra(char *cdg , int ch , int af){
  for(int i = 0 ; i < strlen(cdg) - 1 ; i++){
    if (cdg[i] <= af){
      cdg[i] = cdg[i] + 26 - ch;
    }
    else{
      cdg[i] -= ch; 
    }
  }
  return cdg;
}

int main(void) {
  char codigo[51];
  int chave,casos,afetados,i;
   
  scanf("%d",&casos);
  
  limpabuffer();


  for( i = 0 ; i < casos ; i++){
    fgets(codigo,51,stdin);
    scanf("%d",&chave);
    /*indice dos valores afetados pela chave : valor de A na tabela ASCII somado ao valor da chave decrescido de 1*/
    afetados = 65 + (chave - 1); 
    printf("%s",cifra(codigo,chave,afetados));
    limpabuffer();
  }
  return 0;
}