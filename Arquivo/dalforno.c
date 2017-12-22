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
  arq=fopen("Dados.dat","w+");
  printf("nome: ");
  scanf("%s", reg.nome);
  while(strcmp(reg.nome, "fim")!=0){
    printf("idade: ");
    scanf("%d", &reg.idade);
    printf("Mes de aniversario: ");
    scanf("%d", &reg.mesAniversario);
    fwrite(&reg, sizeof(struct tReg), 1, arq);
    printf("nome: ");
    scanf("%s", reg.nome);
  }
}
