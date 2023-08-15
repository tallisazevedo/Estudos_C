#include <stdio.h>

int main(void) {

  float cm;
  
  printf("Escreva a medida em centímetros:");
  scanf("%f", &cm);

  float polegadas = cm / 2.54;
  float pes = polegadas / 12;
  
  
  printf("\nPolegadas: %.2f", polegadas);
  printf("\nPés: %.3f\n", pes);
  return 0;
}