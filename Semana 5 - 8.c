#include <stdio.h>

int funcao(int A[], int B[], int tamA, int tamB){
  for (int i = 0; i < tamA; i++){
    for (int j = 0; j < tamB; j++){
      if (A[i] == B[j]){
        printf("%d ", A[i]);
        break;
      }
    }
  }
}

int main(){
  int A[5] = {7, 2, 5, 8, 4};
  int tamA = sizeof(A) / sizeof(A[0]);

  int B[4] = {4, 2, 9, 5};
  int tamB = sizeof(B) / sizeof(B[0]);

  printf("A  B = ");
  funcao(A, B, tamA, tamB);

  return 0;
}