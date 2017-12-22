#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct tReg{
char nome[30];
int idade, mesAniversario;
};
main(){
  struct tReg reg;
  FILE *arq;
  arq=fopen("dados.dat","r");
  fread(&reg, sizeof(struct tReg), 1, arq);
  while(!feof(arq)){
    printf("nome: %s\n", reg.nome);
    printf("idade: %d\n", reg.idade);
    printf("Mes de aniversario: %d\n", reg.mesAniversario);
    sleep(1);
    fread(&reg, sizeof(struct tReg), 1, arq);
  }
  fclose(arq);
  }
