#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior(int v[],int tam);
main(){
  setlocale(LC_ALL,"portuguese");
  int vetor[256],tamanho,maiorDoidera=0;
  printf("Escolha o o tamanho do vetor: ");
  fflush(stdin);
  scanf("%d",&tamanho);
  fflush(stdin);
  for(int i=0;i<tamanho;i++){
    vetor[i]=0;
  }
  for(int i=0;i<tamanho;i++){
    printf("Informe o valor da posição %d: ",i+1);
    fflush(stdin);
    scanf("%d",&vetor[i]);
    fflush(stdin);
  }
  for(int i=0;i<tamanho;i++){
    printf("O valor da posição %d é: %d\n",i+1,vetor[i]);
  }
  maiorDoidera=1111;
  maiorDoidera=maior(vetor,tamanho);
  printf("%d\n",maiorDoidera);
}
int maior(int v[],int tam){
  int i,maiorValor=0;
  for(i=0;i<tam;i++){
    if(v[i]<v[i+1]){
      maiorValor=v[i+1];
    }
  }
  return maiorValor;
}
