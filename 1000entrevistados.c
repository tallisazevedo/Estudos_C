#include <stdio.h>

int main (void) {
  int voto, entrevistados = 0;
  int nao = 0, sim = 0;
  float pnao, psim;

  while (entrevistados < 1000)
  {
    printf("Menu:\n");
    printf("Botafogo será o campeão do Brasileirão?\n");
    printf("Voto = 1: Sim ou 0: Não:\n");
    printf("Seu voto:");
    scanf("%i", &voto);

    // TRATAMENTO DE ERRO
    if (voto != 1 && voto != 0)
    {
      printf("ERRO. Voto inválido. Escolha novamente");
    }
    else{
      entrevistados++;
      if (voto == 1) sim++;
      else nao++;
      
    }
    
  }
  
}