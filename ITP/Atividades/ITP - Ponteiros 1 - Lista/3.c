#include <stdio.h>
void soma_vetores(float *v1,float *v2, float *v3,int tam){    
    for (int i = 0; i < tam; i++)
    {
        v3[i] = *v1 + *v2;
        v1++; v2++;
        printf("%.2f ",v3[i]);
    }
    printf("\n");
}

int main(){
    int tamanho ;
    scanf("%d",&tamanho);
    float vet1[tamanho],vet2[tamanho],vet3[tamanho];

    if(tamanho > 10){printf("Muitos elementos!"); return 0;}
    
    else{
        //entrada dos vetores
        for (int i = 0; i < tamanho; i++)
        {
            scanf("%f",&vet1[i]);
        }
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%f",&vet2[j]);
        }

        //saida
        soma_vetores(vet1,vet2,vet3,tamanho);  
    }

    return 0;
}