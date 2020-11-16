#include <stdio.h>
int main(){
    int L1,C1,L2,C2,i,j,k;
    
    scanf("%d %d",&L1,&C1);
    
    int matriz_A [L1][C1];
    
    for ( i = 0; i < L1; i++)
    {
        for ( j = 0; j < C1; j++)
        {
            scanf("%d",&matriz_A[i][j]);
        }
        
    }
    
    scanf("%d %d",&L2,&C2);
    
    int matriz_B[L2][C2],matriz_r[L1][C2];

    
    for ( i = 0; i < L2; i++)
    {
        for ( j = 0; j < C2; j++)
        {
            scanf("%d",&matriz_B[i][j]);
        }
        
    }
    //zerar a matriz resultado
    for ( i = 0; i < L1; i++)
    {
        for ( j = 0; j < C2; j++)
        {
            matriz_r[i][j] = 0;
        }
        
    }


    for ( i = 0; i < L1; i++)
    {
        for ( j = 0; j < C2; j++)
        {
            for ( k = 0; k < L2; k++)
            {
                matriz_r[i][j] += matriz_A[i][k] * matriz_B[k][j];    
            }
            
        } 
    }

    for ( i = 0; i < L1; i++)
    {
        for ( j = 0; j < C2; j++)
        {
            printf("%d ",matriz_r[i][j]);
        }
        printf("\n");
    }
    return 0;   
}