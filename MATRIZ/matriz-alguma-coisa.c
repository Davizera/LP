#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
  setlocale(LC_ALL,"portuguese");
  srand(time(NULL));
  int matrizRandom[10][10];
  int maior=0;
  int menor=0;

  printf("maior %d menor %d\n",maior,menor);

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      matrizRandom[i][j]=rand()%16;
      printf("%d ",matrizRandom[i][j]);
    }
    printf("\n");
  }
  printf("\n\n\n");
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(maior<matrizRandom[i][j]){
        maior=matrizRandom[i][j];
      }
      if(menor>matrizRandom[i][j]){
        menor=matrizRandom[i][j];
      }
      printf("%d ",matrizRandom[i][j]);
    }
    printf("\n");
  }
  printf("maior %d menor %d\n",maior,menor);

}
