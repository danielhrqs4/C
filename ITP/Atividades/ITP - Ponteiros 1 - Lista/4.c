#include <stdio.h>
void MAXMIN(int n, int *m){
    
    int maior = *m ,menor = *m;
    int i_max = 0 ,j_max = 0 ,i_min = 0 ,j_min = 0;
    
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(*m > maior){
                maior = *m;
                i_max = i; j_max = j;
            }   
            if(*m < menor){
                menor = *m;
                i_min = i; j_min = j;
            }
            m++;
        }
        
    }
    printf("%d %d %d %d %d %d \n",maior,i_max, j_max, menor, i_min, j_min);

}

int main(){
    int n;
    scanf("%d",&n);
    int matriz[n*n];
    
    //entrada da matriz
    for (int i = 0; i < n*n; i++)
    {
      scanf("%d",&matriz[i]);  
    }
    MAXMIN(n,matriz);

    return 0;
}