#include <stdio.h>
#include <stdlib.h>
void menu();
void entradeDados(struct car c);
main(){
  struct carros{
    char marca[15],cor[10];
    int ano;
    float preco;
  }cardastro;
  FILE *arquisson;
  arquisson=fopen("carros.dat","a+");
  if (arquisson==NULL){
    printf("Nao foi possivel abrir/criar o arquivo carros.dar!\n");
  }
  else{
    menu();

  }
}
void menu(){
    printf("-------------------BEM VINDO-------------------\n1- Cadastrar carro\n2- Listar carros pelo preco\n3- Listar carros pela marca\n4- Sair");
}

void entradeDados(struct car c){
  struct car{
    char marca[15],cor[10];
    int ano;
    float preco;
  }c;
  printf("Vamos cadastrar seu carro...\nMarca: ");
  scanf("%s",c.marca);
  printf("Cor: ") ;scanf("%s",c.  cor);
  printf("Ano: ") ;scanf("%d",&c. ano);
  printf("Preco: ") ;scanf("%f",&c. preco);
}
