#include <stdio.h>
#include <string.h>
void substring (char *a, char *b, int tama, int tamb){
    
    char *ptra = NULL ,*ptrb = NULL;
    int aux2 = 0 , aux = 0;
    //lógica para checar se é substring
    for (int i = 0; i < tamb - (tama - 1) ; i++)
    {
        ptra = a ; ptrb = b + i; aux = 0; aux2 = 0;
        
        if ((*ptra == *ptrb) || (*ptra) == (*ptrb) + 32 || (*ptra) == (*ptrb) - 32){
            aux2 = i;    
            for (int j = 0; j < tama ; j++)
            {
                if((*ptra == *ptrb) || (*ptra) == (*ptrb) + 32 || (*ptra) == (*ptrb) - 32){
                    aux++;
                }
                if(aux == tama){
                    for (int k = 0; b[aux2] != '\0' ; k++)
                    {
                        printf("%c",b[aux2]);
                        aux2++;  
                    }
                  return;
                }
                ptra ++; ptrb ++ ;
            }   
        }    
    }
    ///////////////////////////////////////////////////////////////////////////////////
    
    //printar quando não é substring
    for (int p = 0; p < tama; p++)
    {
        printf("%c",a[p]);
    }
    printf(" não é substring de ");
    for (int p = 0; p < tamb; p++)
    {
        printf("%c",b[p]);
    } 
    /////////////////////////////////   
}

int main(){
    char A[51],B[51];
    int tamanho_A , tamanho_B;
    
    fgets(A,51,stdin);

    fgets(B,51,stdin);

    tamanho_A = (strlen(A) - 1);tamanho_B = (strlen(B) - 1);
    
    substring(A,B,tamanho_A,tamanho_B);  
    
    return 0;
}