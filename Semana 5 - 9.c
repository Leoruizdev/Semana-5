#include <stdio.h>

void funcao(int A[], int B[], int tamA, int tamB){
  int encontrado;

  for (int i = 0; i < tamA; i++){
    encontrado = 0;

    for (int j = 0; i < tamB; j++){
      if (A[i] == B[j]){
        encontrado = 1;
        break;
      }
    }
    if (!encontrado){
      printf("%d ", A[i]);
    }
  }
}

int main(){
  int A[5] = {7, 2, 5, 8, 4};
  int tamA = sizeof(A) / sizeof(A[0]);

  int B[4] = {4, 2, 9, 5};
  int tamB = sizeof(A) / sizeof(A[0]);

  printf("A - B = ");
  funcao(A, B, tamA, tamB);

  return 0;
}