#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
  int pedra,papel,tesoura,respessoa,respcomputador;
  srand(time(NULL));
  do{
    system("clear");
    printf("Escolha um numero:\n1-Pedra\n2-Papel\n3-Tesoura\n");
    scanf("%d",&respessoa);
  }while(respessoa!=1 && respessoa!=2 && respessoa!=3 );
  if(respessoa==1){
    printf("Voce escolheu %d pedra\n",respessoa);
  }
  if(respessoa==2){
    printf("Voce escolheu %d papel\n",respessoa);
  }
  if(respessoa==3){
    printf("Voce escolheu %d tesoura\n",respessoa);
  }
  respcomputador=rand()%3+1;
  printf("O computador escolheu %d\n",respcomputador);
  if(respessoa!=1 && respessoa>respcomputador){
    printf("voce ganhou do computador\n");
  }else if(respessoa!=1 && respessoa<respcomputador){
    printf("Voce perdeu para o computador\n");
  }else if(respessoa==1 && respcomputador==3){
    printf("Voce ganhou do computador\n");
  }else if(respessoa==1 && respessoa<respcomputador){
    printf("Voce perdeu para o computador\n");
  }
  if(respessoa==respcomputador){
    printf("Deu empate\n");
  }
}
