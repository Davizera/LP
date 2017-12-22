#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  char texto[]="foi muito facil";
  int i,j,k;
  for(i=0;(i<strlen(texto) && texto[i]!=' ');i++);
  for(j=i+1;j<strlen(texto);j++){
    printf("%c",texto[j]);
  }
  printf("\n");
}
