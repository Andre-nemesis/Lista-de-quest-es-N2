##include <stdio.h>

int main () {
	int N1,N2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&N1);
	printf("Digite o segundo valor: ");
	scanf("%d",&N2);
	
	int *a = &N1,*b = &N2;
	
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
	
	printf("\n");
	
	printf("Valores trocados: N1 = %d\tN2 = %d",*a,*b);
	
	return 0;
}
