#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float xx, x, c, delta, xlinha, x2linhas;
	void funcao(){
		system("cls");
		printf("Informe o valor de x�: ");
		scanf("%f", &xx);
		printf("Informe o valor de x: ");
		scanf("%f", &x);
		printf("Informe o valor do termo independente: ");
		scanf("%f", &c);
	}
	void bhaskara(){
		delta=pow(x,2)-4*xx*c;
		printf("\nO valor de delta �: %.f\n", delta);
	}
	void raizes(){
		xlinha=(-x+(sqrt(delta)))/2*xx;
		x2linhas=(-x-(sqrt(delta)))/2*xx;
	}
	
main(){
	setlocale(LC_ALL,"portuguese");
	do{
	funcao();
	}while(xx==0);
	bhaskara();
	if(delta>0){
		raizes();
		printf("Sua equa��o possui 2 ra�zes reais distintas, sendo elas: %.f e %.f", xlinha, x2linhas);
	}
	else if(delta==0){
		raizes();
		printf("Sua equa��o possui 2 ra�zes reais iguais, sendo ela: %.f", xlinha);
	}
	else if(delta<0){
		raizes();
		printf("Sua equa��o possui 2 ra�zes n�o reais distinta. Desculpa, mas ainda n�o realizamos essa opera��o, tente novamete!");
	}
	
}
