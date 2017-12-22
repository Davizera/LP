#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somaVetor(int vet[],int vet2[]);

main(){
  int vetor[5],vetor2[5];
  for(int i=0;i<5;i++){
    printf("Infome o valor da posição %d primeiro vetor: ",i+1);
    scanf("%d",&vetor[i]);
  }
  for(int i=0;i<5;i++){
    printf("Infome o valor da posição %d do segundo vetor: ",i+1);
    scanf("%d",&vetor2[i]);
  }
  somaVetor(vetor,vetor2);
}
void somaVetor(int vet[],int vet2[]){
  int i,vetc[5];
  for(i=0;i<5;i++){
    vetc[i]=0;
  }
  for(i=0;i<5;i++){
    vetc[i]=vet[i]+vet2[i];
  }
  for(i=0;i<5;i++){
    printf("%d\n",vetc[i]);
  }

}
