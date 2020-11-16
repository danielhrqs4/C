#include <stdio.h>
int main(){
    int L,C,i,j,linha_ataque,coluna_ataque;
    scanf("%d %d",&L,&C);
    //cria uma matriz maior para padronizar o algoritmo de checagem
    int linha = L+2 ,coluna = C+2;
    
    int grid[linha][coluna];
    //zerar a matriz
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            grid[i][j] = 0;
        }
    }
    //scanfar o grid
    for (i = 1; i < linha-1; i++)
    {
        for (j = 1; j < coluna-1; j++)
        {
            scanf("%d",&grid[i][j]);  
        }
    }
    //ataque
    scanf("%d %d",&linha_ataque,&coluna_ataque);
    
    //errar o tiro
    if(grid[linha_ataque][coluna_ataque] != 1){
      printf("1");
    }
    //ataque parcial
    else if((grid[linha_ataque][coluna_ataque] == 1) && (grid[linha_ataque - 1][coluna_ataque] == 1 || grid[linha_ataque][coluna_ataque + 1] == 1 || grid[linha_ataque + 1][coluna_ataque] == 1 || grid[linha_ataque][coluna_ataque -1] == 1 )){
        printf("2");
    }
    //ataque total
    else{
        printf("3");
    }
    return 0;
}