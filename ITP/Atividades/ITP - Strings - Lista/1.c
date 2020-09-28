#include <stdio.h>
#include <string.h>
int palindromo (char *palavra){
    int i,j;
    for(i=0,j = strlen(palavra)-1 ; i < j ; i++,j--){
        if(palavra[i] != palavra[j])
            return 0;
    }
    return 1;

}
int main(){
    char *a;
    int recebe;
    scanf("%s",a);
    recebe = palindromo(a);
    recebe == 1 ? printf("%s é um palíndromo",a) : printf("%s não é um palíndromo",a);
}