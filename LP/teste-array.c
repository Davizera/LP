#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheMatriz(int vet[]);
void randomVariable(int random);
main(){
  setlocale(LC_ALL,"portuguese");
  int vet[4],random2=5;
  preencheMatriz(vet);
  for(int i=0;i<4;i++){
    printf("%d ",vet[i]);
  }
  randomVariable(random2);
  printf("%d\n",random2);
}
void preencheMatriz(int vet[]){
  int i;
  for(i=0;i<4;i++){
    printf("Posição %d\n",i+1);scanf("%d",&vet[i]);
  }
}
void randomVariable(int random){
  random+=5;
  printf("\n%d\n",random);
}
