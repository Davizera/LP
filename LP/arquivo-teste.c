#include <stdio.h>

main(){
	FILE *fp;
	char idade[15];
	char nomeArquivo[10];
	printf("informe o nome do arquivo que sera criado:" ); scanf("%s",nomeArquivo);
	fp=fopen(nomeArquivo, "w+");
	if(fp==NULL){
		printf("houve algum problema, o arquivo nao pode ser criado, tente outra vez mais tarde!\n");
	}else{
		printf("a criacao do arquivo deu certo, o arquivo %s foi criado\n", nomeArquivo);
	}
	printf("sua idade: "); fflush(stdin); scanf("%[^\n]",idade);
	fputs(idade, fp);
	fclose(fp);
}