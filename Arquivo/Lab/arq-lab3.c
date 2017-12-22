#include <stdio.h>
#include <stdlib.h>

main(){
  FILE *batman;
  int i=0,mesPesq,j=0;
  batman=fopen("dados.dat","r+");
  struct doidera{
    int mes,idade;
    char nome[30];
  } recadastro[10];
  if (batman==NULL){
    printf("Nao foi possivel abrir o arquivo\n");
  }
  else{
    printf("Informe um mes: ");fflush(stdin);
    scanf("%d",&mesPesq);
    while(!feof(batman)){
      fscanf(batman,"%s %d %d",recadastro[i].nome,&recadastro[i].idade,&recadastro[i].mes);
      printf("%s %d %d\n", recadastro[i].nome,recadastro[i].idade,recadastro[i].mes);
      i++;
    }
    while(j<i){
      if(mesPesq==recadastro[j].mes){
        recadastro[j].idade+=1;
        fprintf(batman, "%s\n%d\n%d\n",recadastro[j].nome,recadastro[j].idade,recadastro[j].mes);
        printf("%d\n",recadastro[i].idade);
      }else{
        fprintf(batman, "%s\n%d\n%d\n",recadastro[j].nome,recadastro[j].idade,recadastro[j].mes);
        printf("%d\n",recadastro[i].idade);
      }
      j++;
    }
  }


}
