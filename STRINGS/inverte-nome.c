#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
  setlocale(LC_ALL,"portuguese");
  char nome[30];
  printf("Informe o nome a ser invertido: ");
  scanf("%[^\n]",nome);
  for (int i=strlen(nome)-1;i>=0;i--){
    printf("%c",nome[i]);
  }
  printf("\n");
}
