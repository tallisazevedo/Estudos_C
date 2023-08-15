#include <stdio.h>

int main(void) {

  char produto[100];
  int quantidade;
  float preco, desconto, reajuste, cDesconto;

  printf("Insira o nome do produto desejado:");
  scanf("%s", &produto);
  printf("Insira o valor do produto:");
  scanf("%f", &preco);
  printf("Insira a quantidade desejada(Unid.):");
  scanf("%i", &quantidade);
  printf("Insira o desconto desejado(%%):");
  scanf("%f", &reajuste);

  // PROCESSAMENTO

  desconto = (1 - reajuste / 100);
  cDesconto = (quantidade * preco) * desconto;
  
  // Saída

  printf("\nValor cheio: %i * %f = %f", quantidade, preco, quantidade * preco);
  printf("\nValor com desconto: %.2f", cDesconto);

  return 0;
}