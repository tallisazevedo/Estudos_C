#include <stdio.h>

int main(void) {
  char aluno[100];
  float B1, B2;
 

  printf("Insira o nome do aluno:");
  scanf("%s", &aluno);
  printf("Insira a nota do 1º bimestre:");
  scanf("%f", &B1);
  printf("Insira a nota do 2º bimestre:");
  scanf("%f", &B2);

  // Saída

  printf("\n%s", aluno);
  printf("\nNota do 1º bimestre: %f", B1);
  printf("\nNota do 2º bimestre: %f", B2);
  printf("\nMédia: %f + %f = %.2f", B1, B2, (B1 + B2) / 2);

  return 0;
}