#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"portuguese");
	char nome[20];
	int tam,i,pal;
	printf("Digite: ");
	scanf("%s",nome);
	fflush(stdin);
	tam=strlen(nome)-1;
	for (i=0; i<tam; i++) {
		if (nome[i]!=nome[tam]) {
		pal=1;
	}
		else {
			tam--;
		}
	}
	if (pal==1) {
		printf("%s não é palindorma\n",nome);
	}
	else {
		printf("%s é palindroma\n",nome);
	}
	return 0;
}
