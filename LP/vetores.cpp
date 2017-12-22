                      #include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
	int nAlunos, maior, menor;
	float soma,media,desvio, mediana;
	do {
		printf("Escreva a quantidade de alunos: ");
		scanf("%i",&nAlunos);
		system("cls");
	} while (nAlunos<=0);
	float notas[nAlunos];
	for (int i=0; i<nAlunos; i++) {
		do {
			printf("Informe a nota do %i.o aluno: ",i+1);
			scanf("%f",&notas[i]);
		} while (notas[i]<0 || notas[i]>10);
	}
	for (int i=0; i<nAlunos; i++) {
		printf("%3.f\n",notas[i]);
	}	
	soma=0;
	for (int i=0; i<nAlunos; i++) {
		soma=soma+notas[i];
	}
	printf("A soma das notas = %3.f\n",soma);
	
	media=soma/nAlunos;
	printf("A media = %3.f\n",media);
	
	int soma1=0;
	for (int i=0; i<nAlunos; i++) {
		soma1=soma1+pow(notas[i]-media,2);
		desvio=sqrt(soma1/(nAlunos-1));
	}
	printf("O desvio padrao = %f\n",desvio);
	
	maior=notas[0];
	menor=notas[0];
	for (int i=1; i<nAlunos; i++) {
		if (notas[i]>maior) {
			maior=notas[i];
		}
		if (notas[i]<menor) {
			menor=notas[i];
		}
	}
	printf("A maior nota = %i\n",maior);
	printf("A menor nota = %i\n",menor);
	
	for (int i=0; notas[i]<nAlunos; i++) {
		for (int j=1; notas[j]<nAlunos; j++) {
			if (notas[i]>notas[j]) {
				int l;
				l=notas[i];
				notas[i]=notas[j];
				notas[j]=l;
			}
	printf("notas[%f]", notas[i]);	}
	} 

	if(nAlunos %2==0) {
		mediana=(notas[nAlunos/2]+notas[nAlunos/2+1])/2.0;
		printf("A mediana = %f\n",mediana);
	}
	else {
		mediana=notas[nAlunos/2];
		printf("A mediana = %f\n",mediana);
	}
	system("pause");
	
}
