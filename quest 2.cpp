#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[500];
	char *point = str;
	int tam;
	
	printf("Digite uma frase: ");
	gets(str);
	
	tam = strlen(str);
	
	for (int i = 0; i < tam ; i++) {
		if (point[i] == 'a' || point[i] == 'e' || point[i] == 'i' || point[i] == 'o' || point[i] == 'u' || point[i] == 'A' || point[i] == 'E' || point[i] == 'I' || point[i] == 'O' || point[i] == 'U') {}
		else printf("%c", *(point + i));
	}
	
	return 0;
}

