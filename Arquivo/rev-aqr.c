#include <stdio.h>
#include <stdlib.h>

main(){
  FILE *arq;
  char nomeArq[20],caracter[20];
  int num;
  int flushall();
  arq=fopen("aprendendo.txt","r");
  if (arq==NULL){
    printf("o arquivo nao exite, nao se preocupe iremos cria lo agora.\ninforme o nome desejado para o arquivo\n\bEX:arquivo.txt ou arquivo.dat\n");
    fflush(stdin);
    scanf("%s\n",nomeArq);
    fflush(stdin);
    arq=fopen(nomeArq,"w+");
    if (arq==NULL){
      printf("nao esta dando certo mesmo!\n");
    }else{
      printf("vamos continuar\nque tal escrevos um pouco?");
      fflush(stdin);
      scanf("%d\n",&num);
      fputc(num,arq);
      fgetc(arq);
    }
    fclose(arq);
  }else{
    printf("o arquivo foi criado com sucesso!");
  }
}
