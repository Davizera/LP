#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
  setlocale(LC_ALL,"portuguese");
  int urna[6],resp,davi=0,nulo=0,caio=0,nelson=0,lucas=0,francis=0,branco=0;
  for(int i=0;i<4;i++){
    system("clear");
    printf("\nBEM-VINDO VOTE AGORA PORRA!\n0-Branco\n1-Davi\n2-Caio\n3-Lucas\n3-Nelson\n5-Francis\n");
    scanf("%d",&resp);

    if(resp>5||resp<0){
      nulo++;
    }
    if (resp==0){
      branco++;
    }
    if (resp==1){
      davi++;
    }
    if (resp==2){
      caio++;
    }
    if (resp==3){
      lucas++;
    }
    if (resp==4){
      nelson++;
    }
    if (resp==5){
      francis++;
    }
  }
  printf("Voto(s) em nulo:%d\n",nulo );
  printf("Voto(s) em branco:%d\n",branco );
  printf("Voto(s) em  Davi:%d\n", davi);
  printf("Voto(s) em  Caio:%d\n", caio);
  printf("Voto(s) em  Lucas:%d\n", lucas);
  printf("Voto(s) em  Nelson:%d\n", nelson);
  printf("Voto(s) em  Francis:%d\n", francis);
}
