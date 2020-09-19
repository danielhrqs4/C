#include <stdio.h>
int main(){
    float n[10];
    float media;
    int nota_men_3=0;
    for(int i=0 ; i<10; i++){
        scanf("%f",&n[i]);
    }

    media = (n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6]+n[7]+n[8]+n[9])/10;

    for(int i=0 ; i<10; i++){
        if(n[i] < 3){
            nota_men_3++;
        }
    }

    if(media<3){
        printf("Reprovado. Media = %.2f\n",media);
    }
    else if((media >= 5 && nota_men_3 >=1) || (media >=3 && media<5)){
        printf("Reposicao. Media = %.2f\n",media);
    }
    else if(media >= 5 && nota_men_3 ==0){
        printf("Aprovado. Media = %.2f\n",media);
    }
    
    for(int i=0 ; i<10; i++){
        if(n[i] < 3){
            printf("%.2f ",n[i]);
        }
    }
    printf("\n");
    for(int i=0 ; i<10; i++){
        if(n[i] > 5){
            printf("%.2f ",n[i]);
        }
    }
    return 0;
}