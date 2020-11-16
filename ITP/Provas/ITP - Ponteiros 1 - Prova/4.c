#include <stdio.h>
void imprime_indireto (int **A_indireto, int n) {
    //bubble sort
    int troca;
    for(int i = n-1; i > 0 ; i--){
        for (int j = 0; j < i ; j++){
            if( **(A_indireto + j + 1)  < **(A_indireto + j )){
                troca = **(A_indireto + j );
                **(A_indireto + j ) = **(A_indireto + j + 1);
                **(A_indireto + j + 1) = troca;
            }    
        }   
    }
    //
    for (int k = 0; k < n; k++){
        printf ("%d ", **(A_indireto+k));
    }
    printf("\n");
}

int main(){
    int n; scanf("%d",&n);
    int A[n],B[n];
    int *A_indireto[n];
    
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
        B[i] = A[i];
    }
    for (int i = 0; i < n; i++)
    { 
        A_indireto[i] = &A[i];
    }
    
    imprime_indireto(A_indireto, n);
    
    //roubada monstra :C
    for(int y = 0 ; y < n ; y++){
      printf("%d ",B[y]);
    }
    

    return 0;
}