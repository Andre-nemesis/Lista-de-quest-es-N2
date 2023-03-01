#include <stdio.h>

int main () {
	float V;
	float *point = &V;
	
	printf("Digite um valor real: ");
	scanf("%f",&V);
	
	printf("Valor oirginal: %.2f\nDobro Calculado: %.2f",*point, 2 * *point);
	
	return 0;
}
