#include <stdio.h>
void scanfar_matriz(int A, int B,int m[A][B]){
    int i,j;
    for (i = 0; i < A; i++){
        for (j = 0; j < B; j++){
            scanf("%d",&m[i][j]);
        }      
    }
}
int main(){
    int A,B,i,j;
    
    scanf("%d %d",&A,&B);
    
    int matriz_1[A][B], matriz_2[A][B], matriz_soma[A][B];
    
    scanfar_matriz(A,B,matriz_1);scanfar_matriz(A,B,matriz_2);

    //somar e printar
    for (i = 0; i < A; i++){
        for (j = 0; j < B; j++){
            matriz_soma[i][j] = matriz_1[i][j] + matriz_2[i][j];
            printf("%d ",matriz_soma[i][j]);
        }
        printf("\n");        
    }
    return 0;
}