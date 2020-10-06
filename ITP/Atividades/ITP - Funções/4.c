#include <stdio.h>
float media(char tipodemedia, float a, float b, float c){
    if(tipodemedia == 65){
        return ((a*4)+(b*5)+(c*6))/15;
    } 
    else if(tipodemedia == 78){
        return (a+b+c)/3;
    }
}

int main(){
    char n;
    float nota1,nota2,nota3;
    scanf(" %c",&n);
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    printf("%.2f",media(n,nota1,nota2,nota3));
    return 0;
}