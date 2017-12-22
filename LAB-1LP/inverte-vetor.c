#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void inverte(int vet[]);

main(){
  setlocale(LC_ALL,"portuguese");
  int vetor[50];
  srand(time(NULL));
  for(int i=0;i<50;i++){
    vetor[i]=rand()%50;
  }
  printf("\n\n\n");
  printf("\n\n\n");
  for(int i=0;i<50;i++){
    printf("%d",vetor[i]);
  }
  printf("\n\n\n");
  printf("\n\n\n");
  inverte(vetor);
}
void inverte(int vet[]){
  int i;
  for(i=49;i>=0;i--){
    printf("%d",vet[i]);
  }
  printf("\n");
}
