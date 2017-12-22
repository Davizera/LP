#include <stdio.h>
#include <stdlib.h>

main(){
  FILE *arquivaldo;
  arquivaldo=fopen("dada.txt","r");
  struct cabeza{
		int idade;
		char nomao[100], email[100];

	}euVoze[2];
  if(arquivaldo==NULL){
    printf("Ops, o arquivo nao existe\n");
  }else{
    while(!feof(arquivaldo)){
      fread(&euVoze,sizeof(struct cabeza),1,arquivaldo);
    }
  }
}
