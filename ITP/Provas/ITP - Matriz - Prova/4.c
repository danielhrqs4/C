#include <stdio.h>
int main(){
    int N,i,j,count = 0;
    
    scanf("%d",&N);
    
    int matriz[N][N];
    //lê e checa se tem valor diferente de 0 e 1, e checa as linhas.
    for (i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            count = 0;
            scanf("%d",&matriz[i][j]);
            if( (matriz[i][j] != 1) && (matriz[i][j] != 0)){
                printf("0");return 0; 
            }
            if(matriz[i][j] == 1){
              count ++;
              if(count > 1){
                printf("0");return 0;
              }
            }
        }   
    }
    //checa as colunas 
    for (i = 0; i < N; i++)
    {
        count = 0;
        for ( j = 0; j < N; j++)
        {
            if(matriz[j][i] == 1){
              count ++;
              if(count > 1){
                printf("0");return 0;
              }
            }
        }   
    }
    printf ("1");

    return 0;
}