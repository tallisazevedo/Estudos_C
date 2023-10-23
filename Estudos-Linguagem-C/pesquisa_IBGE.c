#include <stdio.h>

int main(void)
{
int idade;
  // ENTRADA
  printf("Entre com a idade (em anos)\n");
  scanf("%i", &idade);

  // ULA + SAÍDA

  if (idade <= 14){
    printf("ENTREVISTADO: FORA DA TABELA\n");
  }
  else {
    if (idade <= 20)
    {
      printf("ENTREVISTADO: GERAÇÃO Z\n");
    }
    else if (idade <= 34)
    {
      printf("ENTREVISTADO: GERAÇÃO Y\n");
    }
    else if (idade <= 49)
    {
      printf("ENTREVISTADO: GERAÇÃO X ");
    }
    else if (idade < 65)
    {
      printf("ENTREVISTADO: GERAÇÃO BABY BOOMERS ");
    }
    else {
      printf("GERAÇÃO SILENCIOSA");
    }

    
  }
  



  return 0;
}
