#include <stdio.h>

void funcao(int A[], int B[], int tamA, int tamB) {
  int conjunto_uniao[tamA + tamB];
  int tamanho_uniao = 0;

  for (int i = 0; i < tamA; i++) {
      conjunto_uniao[tamanho_uniao++] = A[i];
  }

  for (int i = 0; i < tamB; i++) {
      int encontrado = 0;
      for (int j = 0; j < tamA; j++) {
          if (B[i] == A[j]) {
              encontrado = 1;
              break;
          }
      }
      if (!encontrado) {
          conjunto_uniao[tamanho_uniao++] = B[i];
      }
  }


  printf("A  B = ");
  for (int i = 0; i < tamanho_uniao; i++) {
      printf("%d ", conjunto_uniao[i]);
  }
}

int main() {
  int A[5] = {7, 2, 5, 8, 4};
  int tamA = sizeof(A) / sizeof(A[0]);

  int B[4] = {4, 2, 9, 5};
  int tamB = sizeof(B) / sizeof(B[0]);

  funcao(A, B, tamA, tamB);

  return 0;
}