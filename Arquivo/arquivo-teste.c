#include <stdio.h>
#include <stdlib.h>

main() {
  FILE *arq;
  char placa[7];
  int cor,vel,h,m,s;
  arq=fopen("car.txt","r");
  if (arq==NULL){
    printf("nao foi possivel abrir\n");
  }
  fscanf(arq,"%s %d %d %d %d %d",placa,&cor,&vel,&h,&m,&s);
  if((cor==1) && (h<6)){
    printf("%s %d %d %d %d %d",placa,cor,vel,h,m,s);
  }
}
