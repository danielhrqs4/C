#include <stdio.h>
#include <string.h>
int espacos (char *frase){
    for (int i = 0; i < strlen(frase) - 1; i++)
    {
        if(frase[i] == 32)return 1;
    }
    return 0;
}


int palindromo (char *palavra,int tam){
    int i,j;
    for(i=0,j = tam ; i < j ; i++,j--){
        if(palavra[i] != palavra[j])
            return 0;
    }
    return 1;

}
int main(){
    char a[101], b[101];
    fgets(a,101,stdin);
    
    int i = 0,j,k = 0,tamb;
    
    if(espacos(a) == 1){
        for(; i < strlen(a) - 1;i++){
            if(a[i] == '\0'){ 
                b[k] = a[i] ;
                break;
            }
            if(a[i]=='\0')break;
            if(a[i]==' ')continue;
            b[k] = a[i];
            k++;
        }
        tamb = strlen(b);
        if(palindromo (b,tamb) == 1){
            printf("O texto");printf("%s",b); printf("é um palíndromo");
        }
        else 
            printf("O texto %s é um palíndromo",a);

    }
    
    else{
        if(palindromo (b,tamb) == 1){
            printf("O texto %c",32);printf("%s",a); printf("é um palíndromo");
        }
        else
            printf("O texto %s é um palíndromo",a);      
    }


  
    
}