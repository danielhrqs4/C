#include <stdio.h>
int main(){
    int A,B,control;
    char op,opa,opl;
    printf("Entre com os operandos:\n");
    scanf("%d %d",&A,&B);
    printf("Escolha o tipo de operação('a' ou 'l'):\n");
    scanf(" %c",&op);
    if(op == 'a'){
        printf("Escolha a operação Aritmética(d, m, a):\n");
        scanf(" %c",&opa);
        switch (opa){
        case 'd':
            printf("%d/%d=%d",A,B,A/B);
            break;
        case 'm':
            printf("%d*%d=%d",A,B,A*B);
            break;
        case 'a':
            printf("%d+%d=%d",A,B,A+B);
            break;
        default:
            printf("op inválida");
            break;
        }
    }
    else{
        if(op == 'l'){
            printf("Escolha a operação Lógica (a,x,o):\n");
            scanf(" %c",&opl);
            switch (opl){
            case 'a':

                printf("%d and %d=%d",A,B,A&&B);
                break;
            case 'x':
                printf("%d xor %d=%d",A,B,A^B);
                break;
            case 'o':
                printf("%d or %d=%d",A,B,A||B);
                break;
            default:
                printf("op inválida");
                break;
        }

        }
        else{
            printf("Operação Inválida");
        }
    }
    
    return 0;
}