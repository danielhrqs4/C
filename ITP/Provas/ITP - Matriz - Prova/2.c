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
    while(1){
        
        scanf("%d %d",&linha_ataque ,&coluna_ataque);
        //fora da grid
        if((linha_ataque < 1 || coluna_ataque < 1) || (linha_ataque > linha - 2 || coluna_ataque > coluna -2)){
            return 0;
        }
        //errar o tiro
        else if(grid[linha_ataque][coluna_ataque] == 0){
            grid[linha_ataque][coluna_ataque] = 5;
            printf("1\n");
        }
        //ataque parcial
        else if((grid[linha_ataque][coluna_ataque] == 1) && (grid[linha_ataque - 1][coluna_ataque] == 1)){
            grid[linha_ataque][coluna_ataque] = 5;
            printf("2\n");
        }
        else if((grid[linha_ataque][coluna_ataque] == 1) && (grid[linha_ataque][coluna_ataque + 1] == 1)){
            grid[linha_ataque][coluna_ataque] = 5;
            printf("2\n");
        }
        else if((grid[linha_ataque][coluna_ataque] == 1) && (grid[linha_ataque + 1][coluna_ataque] == 1)){
            grid[linha_ataque][coluna_ataque] = 5;
            printf("2\n");
        }
        else if((grid[linha_ataque][coluna_ataque] == 1) && ( grid[linha_ataque][coluna_ataque -1] == 1)){
            grid[linha_ataque][coluna_ataque] = 5;
            printf("2\n");
        }
        //ja aconteceu o ataque 
        else if(grid[linha_ataque][coluna_ataque] == 5){
            printf("4\n");
        }
        
        //ataque total
    }