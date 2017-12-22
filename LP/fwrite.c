#include<stdio.h>


main(){
	FILE *batman;
	int i;
	char nomezao[100];
	struct cabeza{
		int idade;
		char nomao[100], email[100];

	};
	if(batman==NULL){
		printf("a porra ta louca, o merda do arquivo nao funfou! chama o cara de ti ai!!!\n");
	}
	printf("escolha o nome do arquivo ai per favor!\n---OBS: arquivo.txt (obrigatorio o formato txt)---\n");
	fflush(stdin); scanf("%s",nomezao);
	batman=fopen(nomezao,"a+");
	struct cabeza euVoze;
	for(i=0;i<2;i++){
		printf("informe seu nome: ");fflush(stdin); scanf("%s",euVoze.nomao);
		printf("informe seu email: ");fflush(stdin); scanf("%s",euVoze.email);
		printf("informe sua idade: ");fflush(stdin); scanf("%d",&euVoze.idade);
		fwrite(&euVoze,sizeof(struct cabeza),1,batman);
	}
	fclose(batman);
	batman=fopen(nomezao,"rb");
	fread(&euVoze,sizeof(struct cabeza),1,batman);
	while(!feof(batman)){
	printf("\nnome: %s\n",euVoze.nomao);
	printf("email: %s\n",euVoze.email);
	printf("idade: %d\n",euVoze.idade);
	printf("---------------------------------------\n");
	sleep(2);
	fread(&euVoze,sizeof(struct cabeza),1,batman);
	}
	fclose(batman);
}
