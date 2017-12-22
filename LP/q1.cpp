#include <stdio.h>
#include <stdlib.h>

main (){
	int num1, num2, maior;
	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	printf("Digite o segundo numero: ");
	scanf("%i", &num2);
	if(num1<num2){
		maior=num2;
		printf("%i", maior);
	}
	else{
		maior=num1;
		printf("%i", maior);
	}
	system("pause");
}
