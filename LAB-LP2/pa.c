#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void pea(int a);

main(){
  int razao=0;
  setlocale(LC_ALL,"portuguese");
  printf("Informe a razão da progressão aritmética: ");
  scanf("%d",&razao);
  pea(razao);
}

void pea(int a){
  int i,pa[10];
  for(i=0;i<10;i++){
    pa[i]=0;
  }
  for(i=0;i<10;i++){
    pa[i]=a+pa[i-1];
  }
  for(i=0;i<10;i++){
    printf("%d ",pa[i]);
  }
}
