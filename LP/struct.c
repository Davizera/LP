#include <stdio.h>
#include <stdlib.h>

struct people{
	int idade;
	char nome[30];

	
};

main(){
	int somat=0;
	struct people convidados[3];
	for(int i=0;i<3;i++){
		printf("Informe o nome do %d convidado: ",i+1);
		fflush(stdin);
		scanf("%s", convidados[i].nome);
		printf("Informe o idade do %d convidado: ",i+1);
		fflush(stdin);
		scanf("%d",&convidados[i].idade);
	}
	for(int i=0;i<3;i++){
		somat+=convidados[i].idade;
	}
	printf("%d\n",somat/2);
	for (int i = 0; i < 3; i++){
		if(somat/2<convidados[i].idade){
			printf("%s tem a idade acima da media\n", convidados[i].nome);
		}
	}
		
}