/*
Escreva um programa que solicite ao usu�rio seu peso (em kg) e a altura (em metros) 
e calcule o �ndice de Massa Corp�rea (IMC). 
O IMC � dado pela f�rmula: IMC = peso / altura^2
*/
#include <stdio.h>
#include <stdlib.h>
main(){
     float peso,altura,imc;
     printf("Informe a sua altura em metros:");
     scanf("%f", &altura);  
     printf("Informe o seu peso em quilos:");
     scanf("%f", &peso);       
     imc=peso/(altura*altura);
     printf("IMC=%f\n",imc);
     system("pause");
}
