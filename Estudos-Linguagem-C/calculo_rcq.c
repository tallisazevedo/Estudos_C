#include <stdio.h>

/*
  Faça um algoritimo em C que leia de um aluno (1) da academia
*/

// ALGORITIMO: ENTRADA + ULA + SAÍDA
int main(void) {
  char aluno[100];
  float MC, MQ;

  printf("Insira o nome do aluno:");
  scanf("%s", &aluno);
  printf("\nInsira a medida da cintura do aluno(em centímetros):");
  scanf("%f", &MC);
  printf("\nInsira a medida do quadril do aluno(em centímetros):");
  scanf("%f", &MQ);

  // Saída

  printf("\nNome do aluno: %s", aluno);
  printf("\nRcq: %f / %f = %.2f%%", MC, MQ, MC / MQ * 100);

  return 0;
}
