#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
  char palavra[20];
  int i,j,pali=0;
  setlocale(LC_ALL,"portuegue");
  printf("Informe a palavra a ser analisada: ");
  scanf("%[^\n]",palavra);
  j=strlen(palavra)-1;
  for(i=0;i<strlen(palavra);i++){
    if (palavra[i]!=palavra[j]){
      pali=1;
    }else{
      printf("%c %c\n", palavra[i],palavra[j]);
    }
    j--;
  }
  if(pali==1){
    printf("Não é palíndroma\n");
  }else{
    printf("É palíndroma\n");
  }
}
