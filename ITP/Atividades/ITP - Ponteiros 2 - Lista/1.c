#include <stdio.h>
#include <string.h>

typedef struct string_t {
 char val[101];
}string;


void insereStrEm(string *result, string *str1, int pos, string *str2){

  int tamanho_str1 = strlen(str1->val) - 1;
  int tamanho_str2 = strlen(str2->val) - 1;
  int ultimo_indice = (pos + tamanho_str1) - 1;
  int tamanho_result = (tamanho_str1 + tamanho_str2) + 1;
  int i,k=0,j=0;

  for(i = 0 ; i < tamanho_result ; i++){
    if(i >= pos && i <= ultimo_indice){
      result->val[i] = str1->val[k];
      k++;
    }
    else{
      result->val[i] = str2->val[j];
      j++;
    }
  }
  result->val[i+1] = '\0';
  for(int p = 0 ; p < tamanho_result ; p++){
    printf("%c",result -> val[p]);
  }

}

int main(){
    int pos;
    string str1,str2,result;


    fgets(str2.val,101,stdin);
    fgets(str1.val,101,stdin);
    scanf("%d",&pos);

    insereStrEm(&result, &str1, pos, &str2);

    return 0;
}