#include <stdio.h>
int main(){
    int A,B;
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
            printf("%d / %d=%d\n",A,B,A/B);
            break;
        case 'm':
            printf("%d * %d=%d\n",A,B,A*B);
            break;
        case 'a':
            printf("%d + %d=%d\n",A,B,A+B);
            break;
        default:
            printf("op inválida\n");
            break;
        }
    }
    else{
        if(op == 'l'){
            printf("Escolha a operação Lógica(a, x, o):\n");
            scanf(" %c",&opl);
            switch (opl){
            case 'a':
                printf("%d and %d=%d\n",A,B,A&B);
                break;
            case 'x':
                printf("%d xor %d=%d\n",A,B,A^B);
                break;
            case 'o':
                printf("%d or %d=%d\n",A,B,A|B);
                break;
            default:
                printf("op inválida\n");
                break;
        }

        }
        else{
            printf("Operação Inválida\n");
        }
    }
    
    return 0;
}