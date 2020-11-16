#include <stdio.h>
int main(){
    int tabuleiro[15][15];
    int i,j,preto = 0,branco = 0;
    
    // entrada do tabuleiro
    for ( i = 0; i < 15; i++)
    {
        for ( j = 0; j < 15; j++)
        {
            scanf("%d",&tabuleiro[i][j]);
        }
        
    }
    //checagem das linhas 
    for (i = 0; i < 15; i++){
        preto = 0 ; branco = 0;
        for (j = 0; j < 15; j++){
            if(tabuleiro[i][j] == 1){
                preto++;
                if(preto == 5){
                    printf("1");
                    return 0;
                }
            }
            else{
                preto = 0;
            }
            if(tabuleiro[i][j] == 2){
                branco++;
                if(branco == 5){
                    printf("2");
                    return 0;
                }
            }
            else{
                branco = 0;
            }
        }
    }             
    //se ninguém venceu, checa as colunas
    for (i = 0; i < 15; i++){
        preto = 0 ; branco = 0;
        for (j = 0; j < 15; j++){
            if(tabuleiro[j][i] == 1){
                preto++;
                if(preto == 5){
                    printf("1");
                    return 0;
                }
            }
            else{
                preto = 0;
            }
            if(tabuleiro[j][i] == 2){
                branco++;
                if(branco == 5){
                    printf("2");
                    return 0;
                }
            }
            else{
                branco = 0;
            }
        }
    }
    printf("0");
    return 0;
}