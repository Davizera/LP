#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordem(int vector[]);

main(){
  setlocale(LC_ALL,"portuguese");
  int vetor[4];
  for(int i=0;i<10;i++){
    printf("Informe o valor da posição %d: ",i+1);
    scanf("%d",&vetor[i]);
  }
  ordem(vetor);
  for(int i=0;i<10;i++){
    printf("O valor da posição %d: %d\n",i+1,vetor[i]);
  }
}

void ordem(int vector[]){
  int i,j,aux;
    for(i=0;i<10;i++){
      for(j=0;j<10;j++){
        if (vector[i]<vector[j]){
          aux=vector[i];
          vector[i]=vector[j];
          vector[j]=aux;
        }
    }
  }
}
