#include <stdio.h>


main(){
	FILE *arq;
	arq=fopen("textao.txt","a+");
	char nome[10], modelo[10];
	int ano;
	if(arq==NULL){
		printf("falha na abertura/criacao do aquivo\n");
	}else{
	printf("infome o seu nome: "); fflush(stdin); scanf("%[^\n]",nome);
	printf("infome o seu modelo: ");fflush(stdin); scanf("%[^\n]",modelo);
	printf("infome o ano: "); fflush(stdin); scanf("%d",&ano);
	fprintf(arq, "nome: %s\n modelo: %s\n ano: %d\n--------------------------------------------------------\n",nome,modelo,ano);
	fread(arq,sizeof(arq),1,arq);
	fclose(arq);
	}
}