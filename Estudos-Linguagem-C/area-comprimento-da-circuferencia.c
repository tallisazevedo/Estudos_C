#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{

	float raio, pi=3.14, area, comprimento;
	

	printf("RAIO = "); 
	scanf("%f", &raio);
 

	area = pi * raio * raio;
  comprimento = 2 * pi * raio;
  
 

	printf("AREA = %.2f m2 \n", area);
  printf("COMPRIMENTO = %.2f\n", comprimento);
 

	return 0;
}

