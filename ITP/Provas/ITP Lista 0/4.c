#include <stdio.h>
int main(){
    float m1,c1,m2,c2,xi,yi;
    scanf("%f %f %f %f",&m1,&c1,&m2,&c2);
    if(m1==m2 && c1==c2){
        printf("Retas colineares!");
    }
    else if(m2-m1 == 0){
        printf("Retas paralelas!");
    }
    else{
        xi = (c1-c2)/(m2-m1);
        yi = (m1 * xi) +c1;
        printf("Interseção Pi = (%.1f, %.1f)",xi,yi);
    } 
    return 0;
}