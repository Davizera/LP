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
		printf("Informe o n�mero de x�caras de farinha de trigo: ");
		scanf("%d", &xic);
		printf("Informe o n�mero de ovos que ser�o usados: ");
		scanf("%d", &ovo);
		printf("Informe o n�mero de colheres de sopa que v�o ser usadas: ");
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
     printf ("\n O maior n�mero e de bolos que poder�o ser feitos � %d", menor);		
}
