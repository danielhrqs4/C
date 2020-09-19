#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>10){
        printf("Muitos elementos!");
    }
    else{
    float vetor_1[n],vetor_2[n],soma[n];
        for(int i=0 ; i<n ; i++){
        scanf("%f",&vetor_1[i]);
        }
        for(int i=0 ; i<n ; i++){
        scanf("%f",&vetor_2[i]);
        } 
        for(int i=0 ; i<n ; i++){
        printf("%.2f ",soma[i] = vetor_1[i] + vetor_2[i]);
        }   
    }
    return 0;
}