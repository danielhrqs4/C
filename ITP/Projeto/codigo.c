#include <stdio.h>
int main(){
    
    float S_0, I_0 , R_0 , h, N, T, m , n , T_linha;
    float b , k;

    scanf("%f %f %f %f",&T, &S_0, &I_0, &N);

    b = N/(T * S_0 * I_0);
    
    //k = m/(n * T_linha);
    
    printf("%f\n",b);

    return 0;
}