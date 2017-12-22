#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void mudaValor(int v[]);
main(){
  setlocale(LC_ALL,"portuguese");
  int vet[]={3,2,1};
  for(int i=0;i<3;i++){
    printf("%d ",vet[i]);
  }
  mudaValor(vet);
  printf("\n");
  for(int i=0;i<3;i++){
    printf("%d ",vet[i]);
  }
}
void mudaValor(int v[]){
  int i;
  for(i=0;i<3;i++){
    if(i==2){
      v[i]=-15;
    }
  }
}
