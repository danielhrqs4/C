#include <stdio.h>
int main(){
    int vetor[3];
    for(;;){
        for(int i=0 ; i<3 ; i++){
            scanf("%d",&vetor[i]);
        }
        if(vetor[0]>=0 && vetor[1]>=0 && vetor[2]>=0){
            for(int i=0 ; i<3 ; i++){
                printf("%02X",vetor[i]);
            }
            printf("\n");
        }
        else{
            break;
        }
    }
    return 0;
}
