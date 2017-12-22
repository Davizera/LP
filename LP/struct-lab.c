#include <stdio.h>
#include <stdlib.h>
typedef enum{true,false}bool;

main(){
  int respNum;
  bool resposta;
    do {
      system("clear");
      printf("-----Fazenda Narnia:-----\n");
      printf("1- Realizar abate?\n");
      printf("2- Checar estado do gado\n");
      fflush(stdin);
      scanf("%d\n",&respNum);
      if ((respNum==1)||(respNum==2)){
        resposta=true;
      }else{
        resposta=false;
      }
    }while(resposta==false);
    printf("deu certo!\n");
}
