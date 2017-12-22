#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int xic,ovo ,colher , a, b, c, menor, maior;
	main()
{
	setlocale(LC_ALL, "Portuguese");
	fflush(stdout);
	do{
		system("cls");
		printf("Informe o número de xícaras de farinha de trigo: ");
		scanf("%d", &xic);
		printf("Informe o número de ovos que serão usados: ");
		scanf("%d", &ovo);
		printf("Informe o número de colheres de sopa que vão ser usadas: ");
		scanf("%d", &colher);
    }
    while(xic<0 || ovo<0 || colher<0);
    if(xic%2==0 || xic%2!=0){
    	a=xic/2;
    	printf("\nA quatidade de bolos possivel: %d", a);
	}
	if(ovo%3==0 || ovo%3!=3){
    	b=ovo/3;
    	printf("\nA quatidade de bolos possivel: %d", b);	
	}
	if(colher%5==0 || colher%5!=0){
    	c=colher/5;
    	printf("\nA quatidade de bolos possivel: %d", c);
	}
	 maior = a;
     menor = a;
	 if (b < menor)
        menor = b;
     if (b > maior)
        maior = b;
     if (c < menor)
        menor = c;
     if (c > maior)
        maior = c;
     printf ("\n O maior número e de bolos que poderão ser feitos é %d", menor);		
}
