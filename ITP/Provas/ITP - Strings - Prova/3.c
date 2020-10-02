#include <stdio.h>
#include <string.h>
int main() {
  char A[41],vogais=0,consoantes=0,tam_a;
  int aux = 0,aux2 = 0,i,j,troca;
  
  fgets(A,41,stdin); tam_a =strlen(A)-1;

  //conta a quantidade de vogais e de consoantes
  for(int i = 0 ; i < tam_a  ; i++){
    if(A[i] == 97 || A[i] ==101 || A[i] ==105 || A[i] ==111 || A[i] ==117){
      vogais++;
    }
    else{
      consoantes++;
    }
  }

  //separa as consoantes e as vogais em duas strings
  char V[vogais],C[consoantes];
  for(int i = 0 ; i < tam_a  ; i++){

    if(A[i] == 97 || A[i] ==101 || A[i] ==105 || A[i] ==111 || A[i] ==117){
      V[aux]  = A[i];
      aux++;
    }
    else{
      C[aux2] = A[i];
      aux2++;
    }
  }
  //ordenar as strings(bubble sort) e printar.
  for(j=vogais-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(V[i]>V[i+1]){
				aux=V[i];
        V[i]=V[i+1];
        V[i+1]=aux;
      }
    }
  }
  for(int i= 0 ; i< vogais ; i++){
    printf("%c",V[i]);
  }
  for(j=consoantes-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(C[i]>C[i+1]){
				aux=C[i];
        C[i]=C[i+1];
        C[i+1]=aux;
      }
    }
  }
  for(int i= 0 ; i< consoantes ; i++){
    printf("%c",C[i]);
  }

}

