#include <stdio.h>

int main () {
	int tamV;
	
	printf("Digite um numero para ser o tamanho do array: ");
	scanf("%d",&tamV);
	
	int ar[tamV];
	
	printf("\n");
	
	printf("Agora digite os numeros para preencher o vetor: \n");
	for(int i = 0;i < tamV; i++) {
		printf("%d valor: ",i+1);
		scanf("%d",&ar[i]);
	}
	
	int *point = ar;
	
	printf("\n");
	
	for(int i = tamV; i > 0;i--) {
		printf("%d valor: %d\n",i,*(point + i - 1));
	}
	
	return 0;
}
