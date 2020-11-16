#include <stdio.h>
int main(){
    int tam,i,j;
    
    scanf("%d",&tam);

    int matriz[tam][tam];

    for ( i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            if(i == j ){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 0;
            }
        }
        
    }

    for ( i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");  
    }
     
    return 0;
}