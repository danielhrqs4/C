#include <stdio.h>
int main(){
  int n,x=0,y=1,aux;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    aux = x+y;
    x = y;
    y = aux;
    printf("%d",aux);
  }
}