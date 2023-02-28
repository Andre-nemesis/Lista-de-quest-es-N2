#include <stdio.h>
#include <stdlib.h>
#define ar 5

int main () {
	int arr[ar];
	int *point = arr;
	
	printf("Digite os valores para preencher o array: \n\n");
	
	for(int i = 0; i < ar; i++) {
		printf("%d valor: ",i + 1);
		scanf("%d",&arr[i]);
	}
	
	printf("Mostrando os valores: \n\n");
	
	for(int i = 0; i < ar; i++) printf("%d valor: %d\n", i + 1,*(point + i));
	
	system("cls");
	
	printf("\nMostrando enderecos: \n");
	
	for(int i = 0; i < ar; i++) printf("|%d valor: %d\t|Endereco: %p|\n",i + 1,*(point + i),(point + i));
	
	
	return 0;
}
