#include <stdio.h>
#include <string.h>
char[] multiplexador(char A[], char B[],int tam_a,int tam_b){
    
    int i=0,j=1,k=0;
    int tam_C = tam_a + tam_b ;
    char C[tam_C];
    
    if(tam_a > tam_b){
        for(i=0 ; i < tam_b ; i++){
            C[j] = B[i];
            j += 2;
        }
        for(i=0 ; i < j - (tam_b-1); i++){
            C[k] = A[i];
            k += 2;
        }
    }
    return C;

}

int main(){
    char A[40+1],B[40+1];
    int tam_a,tam_b;
    
    fgets(A,41,stdin);
    fgets(B,41,stdin);

    tam_a = strlen(A)-1;
    tam_b = strlen(B)-1;
    printf("%s",multiplexador(A,B,tam_a,tam_b));
   
    return 0;
}