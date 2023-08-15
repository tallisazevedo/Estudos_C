#include <stdio.h>
/*
Faça um algoritmo em C que leia:

⟼ Medidas de um Tanque de combustível - LAP (em metros):

⟼ Preço por Litros: Álcool e Gasolina.

e exiba na tela o total a ser pago para encher este tanque de combustível:

⟼ Somente com gasolina;

⟼ Somente com Álcool;

⟼ na proporção: 20% de Álcool e 80% de Gasolina.

(Sabendo que, 1 𝑚𝑒𝑡𝑟𝑜3=1000𝐿𝑖𝑡𝑟𝑜𝑠.)
*/


int main(void)
{
  float largura, altura, profundidade, gPreco, aPreco;

  printf("Insira a largura do tanque:");
  scanf("%f", &largura);
  printf("Insira a altura do tanque:");
  scanf("%f", &altura);
  printf("Insira a profundidade do tanque:");
  scanf("%f", &profundidade);
  printf("Insira o valor da gasolina:");
  scanf("%f", &gPreco);
  printf("Insira o valor do álcool:");
  scanf("%f", &aPreco);

  float tanque = (largura * altura * profundidade) * 1000;
  float tanque2 = (largura * altura * profundidade);
  float gasolina_alcool = (tanque * 0.2 * aPreco) + (tanque * 0.8 * gPreco);

  printf("\nVolume do tanque: %2.f", tanque);
  printf("\nVolume do tanque: %2.f", tanque2);
  printf("\nValor total da gasolina: %f * %f = %.2f\n", tanque, gPreco, tanque * gPreco);
  printf("\nValor total do álcool: %f * %f = %.2f\n ", tanque, aPreco, tanque * aPreco);
  printf("\n20%% álcool e 80%% gasolina: %2.f\n", gasolina_alcool);
  







  return 0;
}
