#include <stdio.h>
#include <stdlib.h>

main(){
  char teste[3][30];
  for(int i=0;i<3;i++){
    printf("Informe o %dº nome: ",i+1);
    scanf("%s",teste[i]);
    fflush(stdin);
  }
  for(int i=0;i<3;i++){
    printf("%s\n",teste[i]);
  }
}
