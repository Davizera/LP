#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE*arq;
  arq=fopen("dados.dat","r+");
  char fim[3]="fim";
  struct people{
    char nome[30];
    int idade,mes;
  }pe;
  if(arq==NULL){
    printf("Nao foi possivel abir o arquivo\n");
  }
  else{
    printf("Nome: ");scanf("%s",pe.nome);
    while(strcmp(pe.nome,"fim")!=0){
      printf("Idade: ");scanf("%d", &pe.idade);
      printf("Mes: ");scanf("%d", &pe.mes);
      fprintf(arq, "%s\n%d\n%d\n",pe.nome,pe.idade,pe.mes);
      printf("Nome: ");scanf("%s", pe.nome);
    }
  }
  fclose(arq);
  return 0;
}
