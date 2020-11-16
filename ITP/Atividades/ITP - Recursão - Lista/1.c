#include <stdio.h>
#include <string.h>


char *tira_espacos(char *str , char *str2){
    int i=0,k=0;

    for(;i< strlen(str);i++){
        if(str[i]=='\0')break;
        if(str[i]==' ')continue;
        str2[k]=str[i];
        k++;
    }
    //str2[k+1] = '\0';
}

int checa_palindromo (char * v, int i, int j ){
    if(i >= j ) return 1;
    else if (i < j){
        if(v[i] == v[j])
        return checa_palindromo( v, i+1, j-1);
    else
        return 0;
    }
}


int main(){
    char frase[101];
    char frase_sem_espacos[101];
    
    fgets(frase,101,stdin);

    tira_espacos(frase,frase_sem_espacos);

    printf("%s",frase_sem_espacos);

    /*if(checa_palindromo(frase,0,tamanho-1) == 1){
        printf("O texto %s é palíndromo\n",frase);
    }
    else{
        printf("O texto %s não é palíndromo\n",frase);
    }*/
    
    return 0;
}