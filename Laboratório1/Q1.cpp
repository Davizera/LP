/*
Escreva um programa que leia uma temperatura em graus Fahrenheit e a imprima em graus Cent�grados. A convers�o de graus Fahrenheit para Cent�grados � obtida por C=(5/9)(F-32).
A sa�da do seu programa dever� apresentar a seguinte mensagem:
XX.XX graus Fahrenheit equivalem a YY.YY graus Celsius
XX.XX � a temperatura Fahrenheit em informada pelo usu�rio
YY.YY � o valor da temperatura em Celsius calculada por seu programa
*/
#include <stdio.h>
#include <stdlib.h>
main(){
     float celsius,fahrenheit;
     printf("Informe o valor da temperatura em Fahrenheit:");
     scanf("%f", &fahrenheit);  
     celsius=(fahrenheit-32)*5/9;
     printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius\n",fahrenheit,celsius);
     system("pause");
}
