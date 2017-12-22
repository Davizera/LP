/*
5.	Um terminal caixa eletrônico de banco possui um programa que analisa o valor solicitado pelo cliente e calcula o menor 
número de cédulas necessárias para compor este valor. O número de cédulas é função dos valores das cédulas contidas na máquina. 
Escreva um programa que solicite ao usuário um valor em dinheiro (sem centavos), e informe quantas notas de cada valor são 
necessárias para atender ao pedido do usuário. Considere que a máquina possui notas de 5, 10, 50 e 100 reais. 
Por exemplo, se o cliente informar o valor 780, o seu programa deverá apresentar o seguinte resultado: 
0 nota(s) de 5 reais
3 nota(s) de 10 reais
1 nota(s) de 50 reais
7 nota(s) de 100 reais

*/
#include <stdio.h>
#include <stdlib.h>
main(){
     int valor,n5,n10,n50,n100;
     printf("Informe o valor que deseja sacar");
     scanf("%i", &valor);  
     n100=valor/100;
     valor=valor%100;
     n50=valor/50;
     valor=valor%50;
     n10=valor/10;
     valor=valor%10;
     n5=valor/5;
     valor=valor%5;     
     printf("%i nota(s) de 5 reais\n",n5);
     printf("%i nota(s) de 10 reais\n",n10);
     printf("%i nota(s) de 50 reais\n",n50);    
     printf("%i nota(s) de 100 reais\n",n100);   
     system("pause");
}
