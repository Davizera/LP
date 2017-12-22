#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int repete(char pala[],char letra);
int main(){
  setlocale(LC_ALL,"portuguese");
  char palavra[30],letra;
  int repetiu=0;
  printf("Informe a letra: ");
  scanf("%c",&letra);
  fflush(stdin);
  printf("Informe a palavra: ");
  scanf("%s",palavra);
  fflush(stdin);
  repetiu=repete(palavra,letra);
  printf("A letra repetiu %d ve(zes)\n",repetiu);
  return 0;
}
int repete(char pala[],char letra){
  int i,rept=1000,tam;
  tam=strlen(pala);
  printf("Putaria do porra\n");
  rept=0;
  for(i=0;i<tam;i++){
    if(letra==pala[i]){
      rept++;
    }
  }
  return rept;
}
