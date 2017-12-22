#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
  setlocale(LC_ALL,"portuguese");
  int matrizA[1][1],matrizB[1][1],la,ca,lb,cb,matc[1][1],i,j,k;

  do {
    system("clear");
    printf("Informeo numero de linhas de A: ");
    scanf("%d",&la);
    printf("Informeo numero de colunas de A: ");
    scanf("%d",&ca);
    printf("Informeo numero de linhas de B: ");
    scanf("%d",&lb);
    printf("Informeo numero de colunas de B: ");
    scanf("%d",&cb);
  } while(la<=0 || lb<=0 || ca<=0 || cb<=0 || ca!=lb);
  matrizA[la][ca];
  matrizB[lb][cb];
  for(int i=0;i<la;i++){
    for(int j=0;j<ca;j++){
      printf("Informe a posição A [%d] [%d]: ",i+1,j+1);
      scanf("%d",&matrizA[i][j]);
    }
  }
  for(int i=0;i<lb;i++){
    for(int j=0;j<cb;j++){
      printf("Informe a posição B [%d] [%d]: ",i+1,j+1);
      scanf("%d",&matrizB[i][j]);
    }
  }
  printf("Matriz A:\n");
  for(int i=0;i<la;i++){
    for(int j=0;j<ca;j++){
      printf("%d ",matrizA[i][j]);
    }
    printf("\n");
  }
  printf("Matriz B:\n");
  for(int i=0;i<lb;i++){
    for(int j=0;j<cb;j++){
      printf("%d ",matrizB[i][j]);
    }
    printf("\n");
  }
  matc[la][cb];
  for(i=0;i<ca;i++){
    for(j=0;j<lb;j++){
      matc[i][j]=0;
    }
  }
  for(i=0;i<ca;i++){
    for(j=0;j<lb;j++){
      printf("%d ",matc[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<ca;i++){
    matc[i][j]=0;
    for(j=0;j<lb;j++){
      for(k=0;k<ca;k++){
      matc[i][j]=matc[i][j]+(matrizA[i][k] * matrizB[k][j]);
    }
  }
  }
  for(i=0;i<ca;i++){
    for(j=0;j<lb;j++){
      printf("%d  ",matc[i][j]);
    }
    printf("\n");
  }
}
