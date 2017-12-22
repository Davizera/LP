#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void escreveMatriz(char matA[][20],int matB[]);
void calculaMedia(char matA[][20],int matB[]);

main(){
  setlocale(LC_ALL,"portuguese");
  char matrizPessoas[20][20];
  int idade[20],media;
  escreveMatriz(matrizPessoas,idade);
  calculaMedia(matrizPessoas,idade);

}
void escreveMatriz(char matA[][20],int matB[]){
  int i,j;
  for(i=0;i<3;i++){
    printf("Informe o nome:\n");scanf("%s",matA[i]);
    printf("Informe a idade:\n");scanf("%d",&matB[i]);
  }
  for(i=0;i<3;i++){
    printf("%s %d\n",matA[i],matB[i]);
  }
}

void calculaMedia(char matA[][20],int matB[]){
  int i,j,media;
  for(i=0;i<3;i++){
    media=media+matB[i];
  }
  media=media/3;
  for(i=0;i<3;i++){
    if (matB[i]>media){
      printf("%s esta acima da media\n",matA[i]);
    }
  }
}
