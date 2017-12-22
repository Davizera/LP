/* 
Escreva um programa que efetue a soma de todos os números ímpares 
em um intervalo (a,b) informado pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>

main() {
	int limiteInferior,limiteSuperior,numero,temp,soma;
	printf("Informe um dos limites do intervalo");
	scanf("%i",&limiteInferior);	
	printf("Informe o outro limite do intervalo");
	scanf("%i",&limiteSuperior);	
		
	if (limiteInferior>limiteSuperior) {
		temp=limiteInferior;
		limiteInferior=limiteSuperior;
		limiteSuperior=temp;
	}
	numero=limiteInferior+1;
	soma=0;
	while (numero<limiteSuperior) {
		if (numero%2!=0) {
			soma=soma+numero;
		}
		numero++;
	}
	printf("%i\n",soma);
	system("pause");
}
