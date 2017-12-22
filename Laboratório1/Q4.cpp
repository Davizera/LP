/*
Escreva um programa que leia um número de quatro algarismos e mostre o número formado pela 
inversão da ordem dos algarismos do número dado. 
Utilize as operações de %, /, *, + para resolver a questão.
Por exemplo, caso o usuário informe o número 1365, a saída do seu programa 
deverá apresentar a seguinte mensagem:
Invertendo-se os algarismos do numero 1365 obtêm-se o numero 5631
*/
#include <stdio.h>
#include <stdlib.h>
main(){
     int numero,numeroinvertido;
     int algarismo1,algarismo2,algarismo3,algarismo4;
     printf("Informe um numero com quatro algarismos");
     scanf("%i", &numero);  
     algarismo1=numero/1000;
     algarismo2=(numero/100)%10;     
     algarismo3=(numero/10)%10;
     algarismo4=numero%10;
     numeroinvertido=algarismo4*1000+algarismo3*100+algarismo2*10+algarismo1;
     printf("Invertendo-se os algarismos do numero %i obtem-se o numero %i\n",numero,numeroinvertido);
     system("pause");
}
