#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
  setlocale(LC_ALL,"portuguese");
  int quantidade_de_votos,votos[6]={0,0,0,0,0,0},i=-1,resp=0,narnia=0,ganhou=0;
  char opcao[6][30]={"Branco","Davi","Caio","Lucas","Nelson","Francis"};
  printf("Informe a quantidade de votos: ");
  scanf("%d",&quantidade_de_votos);
  system("clear");
  printf("-------------:Eleição Nárnia 2018:-------------\n\n");
  do{
    for(int i=-1;i<6;i++){
      if(i==-1){
        printf("Qualquer voto que não esteja no intevalo [0,5],será computado como nulo!\n");
      }else{
        if(i==0){
          printf("Caso você ponha o numero %d ele será computado como %s \n",i,opcao[i]);
        }else{
          printf("%d - %s \n",i,opcao[i]);
        }
      }
    }
    narnia++;
    scanf("%d",&resp);
    if(resp<0 || resp>5){
      votos[6]++;
    }else if(resp==0){
      votos[0]++;
    }else if(resp==1){
      votos[1]++;
    }else if(resp==2){
      votos[2]++;
    }else if(resp==3){
      votos[3]++;
    }else if(resp==4){
      votos[4]++;
    }else if(resp==5){
      votos[5]++;
    }
    system("clear");
    printf("-------------:Eleição Nárnia 2018:-------------\n\n");
  }while(narnia<quantidade_de_votos);
  for(int i=0;i<7;i++){
    if(i!=6){
      printf("%d %s\n",votos[i],opcao[i]);
    }else{
      printf("%d Nulos\n",votos[i]);
    }
  }
  for (int i=0;i<7;i++){
    if(votos[i]<votos[i+1]){
      ganhou=i+1;
    }
  }
  printf("%s ganhou com %d votos!\n", opcao[ganhou],votos[ganhou]);
}
