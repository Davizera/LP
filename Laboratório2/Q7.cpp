/*
Escreva um programa que solicite ao usuário o valor de um ângulo em grau, 
minuto e segundo e imprima o valor do seno e do cosseno do ângulo informado. 
O programa deverá calcular o seno e o cosseno através dos 20 primeiros termos 
da série abaixo (onde x é dado em radianos). 
Obs: Adapte o programa para calcular o valor da tangente do ângulo. 
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	int grau,minuto,segundo;
	float grau_decimal,grau_radianos;
	int sinal;
	float seno,cosseno,tangente,num,den;
	
	printf("Informe o valor do grau");
	scanf("%i",&grau);
	printf("Informe o valor do minuto");
	scanf("%i",&minuto);
	printf("Informe o valor do segundo");
	scanf("%i",&segundo);
	// converte para grau decimal e depois para radianos
	grau_decimal=grau+minuto/60.+segundo/3600.;
	grau_radianos=grau_decimal*3.141592653589793/180;
	
	// calculo do seno
	sinal=1;
	seno=0;
	for (int i=1;i<40;i=i+2) {
		// calcula o numerador do termo X^i (potência de i)
		num=pow(grau_radianos,i);
		// calcula o denomidaor do termo i! (fatorial de i)
		den=1;
        for (int parcela=i;parcela>=1;parcela--) {
        	 den=den*parcela;      	
        } 
		seno=seno+sinal*num/den;
		sinal=-sinal;		
	}
	printf ("Seno=%f\n",seno);
	// calculo do cosseno
	sinal=1;
	cosseno=0;
	for (int i=0;i<40;i=i+2) {
		// calcula o numerador do termo X^i (potência de i)
		num=pow(grau_radianos,i);
		// calcula o denomidaor do termo i! (fatorial de i)		
		den=1;
        for (int parcela=i;parcela>=1;parcela--) {
        	 den=den*parcela;      	
        } 
		cosseno=cosseno+sinal*num/den;
		sinal=-sinal;		
	}
	printf ("Cosseno=%f\n",cosseno);	
	
    // calculo da tangente
	tangente=seno/cosseno;
	printf ("Tangente=%f\n",tangente);	
	
	system("pause");
}
	
	
