#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculaMedia(int alunos[],int tamanhoTurma);

main(){
  setlocale(LC_ALL,"portuguese");
  int tam_turma=0;
  printf("Informe o tamanho da sua  turma:");
  scanf("%d",&tam_turma);
  int turma[tam_turma];
  for(int i=0;i<tam_turma;i++){
    printf("Informe a média final do %d aluno: ",i+1);
    scanf("%d", &turma[i]);
  }
  calculaMedia(turma,tam_turma);
}
void calculaMedia(int alunos[], int tamanhoTurma){
  int i,soma=0;
  float media=0;
  for(i=0;i<tamanhoTurma;i++){
    soma+=alunos[i];
  }
  media=soma/tamanhoTurma;
  printf("\nA soma é %d o tamanho da turma é %d \n",soma,tamanhoTurma);
  soma=0;
  for(i=0;i<tamanhoTurma;i++){
    if(alunos[i]>media){
      soma++;
    }
  }
  printf("Essa é a média da turma: %.1f\n",media);
  printf("%d alunos ficaram acima da média\n",soma);
}
