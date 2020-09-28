#include <stdio.h>
#include <string.h>

int maiusculas(char vetor[]){
    int count = 0,i,j;
    for(i=0 ; i < strlen(vetor)-1 ; i++){
        for(j=65; j<=90 ; j++){
            if(vetor[i]==j){
                count ++;
            }
        }
    }
    return count;
}

int minusculas(char vetor[]){
    int count = 0,i,j;
    for(i=0 ; i < strlen(vetor)-1 ; i++){
        for(j=97; j<=122 ; j++){
            if(vetor[i]==j){
                count ++;
            }
        }
    }
    return count;
}

int main(){
    char a[31];
    fgets(a,31,stdin);
    printf("%d %d",maiusculas(a),minusculas(a));

}