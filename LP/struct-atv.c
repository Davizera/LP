#include <stdio.h>
#include  <stdlib.h>

main(){
	struct campo{
		char marca[10],cor[20];
		int ano;
		float preco;
	};
	struct campo carro;
	printf("informe a marca do carro: ");scanf("%s",carro.marca);
	printf("informe o ano do carro: ");scanf("%d",&carro.ano);
	printf("informe cor");scanf("%s",carro.cor);
	printf("informe o preco do carro: ");scanf("%f",&carro.preco);
	printf("%s\n%s\n%d\n%f\n",carro.marca,carro.cor,carro.ano,carro.preco);
}