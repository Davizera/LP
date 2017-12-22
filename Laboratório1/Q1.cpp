/*
Escreva um programa que leia uma temperatura em graus Fahrenheit e a imprima em graus Centígrados. A conversão de graus Fahrenheit para Centígrados é obtida por C=(5/9)(F-32).
A saída do seu programa deverá apresentar a seguinte mensagem:
XX.XX graus Fahrenheit equivalem a YY.YY graus Celsius
XX.XX é a temperatura Fahrenheit em informada pelo usuário
YY.YY é o valor da temperatura em Celsius calculada por seu programa
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
