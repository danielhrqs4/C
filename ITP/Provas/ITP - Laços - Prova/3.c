#include <stdio.h>
int main(){
    int n,control,dec=0,cre=0;
    scanf("%d",&n);
    float vetor[n];
    for(int i=0 ; i<n ; i++){
        scanf("%f",&vetor[i]);
    }
      for(int i=0 ; i<n-1 ; i++){
        if(vetor[i]>vetor[i+1]){
            dec++;
        }
        else if (vetor[i]<vetor[i+1]){
            cre++;
        }
    }
    if(dec == n-1){
      printf("-1\n");
    }
    else if(cre == n-1){
      printf("1\n");
    }
    else{
      printf("0\n");
    }
    return 0;
}