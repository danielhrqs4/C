#include <stdio.h>
#include <string.h>
int substring(char A[],char B[]){
    int i,j,count;
    for(i=0 ; i <= ((strlen(B)-1) - (strlen(A)-1)); i++){
      count =0;
      if(A[0] == B[i]){
            for(j=0 ; j< strlen(A)-1;j++){
                if(A[j] == B[i+j]){
                    count++;
                }      
            }
            if(count == strlen(A)-1){
                return i+1;
                break;
            }
      }
    }
    return 0;
}

int main(){
    char A[31],B[31];

    fgets(A,31,stdin);
    fgets(B,31,stdin);

    printf("%d",substring(A,B));  
    return 0;
}
