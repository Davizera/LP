#include <stdio.h>
#include <stdlib.h>
struct people{
  char nome[30];
  int idade,mes;
}oi;
main(){
  FILE *arq;
  int pula;
  arq=fopen("doidera.txt","a+");
  if(arq==NULL){
    printf("Nao foi possivel cria lo...\n");
  }else{
    // for(int i=0;i<4;i++){
    //   printf("NOME: ");scanf("%s",oi.nome);
    //   printf("IDADE: ");scanf("%d",&oi.idade);
    //   printf("MES: ");scanf("%d",&oi.mes);
    //   fwrite(&oi,sizeof(struct people),1,arq);
    // }
    for(int i=0;i<10;i++){
    printf("voce qer pular qntos registros?\n");scanf("%d",&pula);
    fseek(arq,pula*sizeof(struct people),SEEK_SET);
    fread(&oi,sizeof(struct people),1,arq);
    printf("nome: %s\nmes: %d\nidade: %d\n",oi.nome,oi.mes,oi.idade);

  }
  fclose(arq);
}
}
