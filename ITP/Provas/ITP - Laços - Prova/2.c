#include <stdio.h>
int main(){
    int x,y,i,dif;
    scanf("%d %d",&x,&y);
    dif = x-y;
    if(dif==0 || dif==1 || dif==-1){
        printf("intervalo vazio\n");
    }
    else{
        if(x<y){
            for(i=x+1; i<y ; i++){
                printf("%d ",i);
            }

        }
        else{
          for(i=y+1; i<x ; i++){
              printf("%d ",i);  
          }
        }
    }
}