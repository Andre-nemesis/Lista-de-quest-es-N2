#include <stdio.h>
#include <stdlib.h>

int main () {
	int tamV;
	
	printf("Digite um numero para ser o tamanho do array: ");
	scanf("%d",&tamV);
	
	int *ar = (int*) malloc(tamV * sizeof(int));
	
	printf("\n");
	
	printf("Agora digite os numeros para preencher o vetor: \n");
	for(int i = 0;i < tamV; i++) {
		printf("%d valor: ",i+1);
		scanf("%d",&ar[i]);
	}
	
	printf("\n");
	
	for(int i = tamV; i > 0;i--) {
		printf("%d valor: %d\n",i,*(ar + i - 1));
	}
	
	free(ar);
	
	return 0;
}
