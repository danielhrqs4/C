#include <stdio.h>
typedef struct{
    int inteiro, escala; 
} Pontofixo;

int *convert(Pontofixo p1, Pontofixo p2, int scale, int *retorno)
{
    int aux = p1.escala - scale, mult = 1;
    
     //converte p1 em pontofixo
    if (aux >= 0)
    {
        for(int i = 0 ; i < aux ; i++)
        {
            mult *= 10;
        }
        p1.inteiro /= mult;
    }
    else{
        aux = aux * -1;
        for(int i = 0 ; i < aux ; i++)
        {
            mult *= 10;
        }
        p1.inteiro *= mult;
    }
    retorno[0] = p1.inteiro;
    
    //converte p2 em pontofixo
    aux = p2.escala - scale; mult = 1;
    if (aux >= 0)
    {
        for(int i = 0 ; i < aux ; i++)
        {
            mult *= 10;
        }
        p2.inteiro /= mult;
    }
    else{
        aux = aux * -1;
        for(int i = 0 ; i < aux ; i++)
        {
            mult *= 10;
        }
        p2.inteiro *= mult;
    }
    retorno[1] = p2.inteiro;
    return retorno;
}

int add(int vetor[2])
{
    int ponto_fixo_resultado = vetor[0] + vetor[1];
    return ponto_fixo_resultado;
}

int main()
{
    int scale;
    int retorno[2];
    Pontofixo p1,p2;
    scanf("%d %d %d %d %d", &p1.inteiro, & p1.escala, &p2.inteiro, &p2.escala, &scale);

    printf("fixo(%d,%d) + fixo(%d,%d) = fixo(%d,%d)", p1.inteiro, p1.escala, p2.inteiro, p2.escala, add(convert(p1,p2,scale,retorno)),scale);

    return 0;
}