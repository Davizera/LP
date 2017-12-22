#include <stdio.h>
#include <stdlib.h>

main(){
  FILE *arquivaldo;
  int i,mesPesq;
  struct dados{
    int mes,idade;
    char nome[30];
  } cadastrados[10];
  arquivaldo=fopen("dados.dat","r");
  if (arquivaldo==NULL){
    printf("Nao foi possivel abrir o arquivo para leitura\n");
  }
  else{
    printf("Informe o mes que voce quer analisar:");
    scanf("%d",&mesPesq);
    fflush(stdin);
    while(!feof(arquivaldo)){
      fscanf(arquivaldo,"%s %d %d",cadastrados[i].nome,&cadastrados[i].idade,&cadastrados[i].mes);
      if (mesPesq==cadastrados[i].mes){
        printf("Pessoa que faz aniversario nesse mes:%s\n",cadastrados[i].nome);
        }
        i++;
      }
    }
    fclose(arquivaldo);
  }
