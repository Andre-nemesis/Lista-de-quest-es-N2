#include <stdio.h>
void troca (int *a,int *b) {
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}


int main () {
	int N1,N2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&N1);
	printf("Digite o segundo valor: ");
	scanf("%d",&N2);
	
	troca(&N1,&N2);
	
	printf("Valores trocados: N1 = %d\tN2 = %d",N1,N2);
	
	return 0;
}
