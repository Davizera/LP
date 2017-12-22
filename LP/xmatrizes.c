#include <stdio.h>
#include <stdlib.h>

main () {
	int la,ca,lb,cb;
	do {
		printf("Escreva o numero de linhas de A: ");
		scanf("%i",&la);
		printf("Escreva o numero de colunas de A: ");
		scanf("%i",&ca);
		printf("Escreva o numero de linhas de B: ");
		scanf("%i",&lb);
		printf("Escreva o numero de colunas de B: ");
		scanf("%i",&cb);
		} while (la<=0 || lb<=0 || ca<=0 || cb<=0 || ca!=lb);
	float A[la][cb], B[la][ca], C[lb][cb];
	for (int i=0; i<la; i++) {
		for (int j=0; j<ca; j++) {
			printf("Informe os elementos de A[%i][%i]: ",i+1,j+1);
			scanf("%f",&A[i][j]);
		}
	}
	for (int i=0; i<lb; i++) {
		for (int j=0; j<cb; j++) {
			printf("Informe os elementos de B[%i][%i]: ",i+1,j+1);
			scanf("%f",&B[i][j]);
		}
	}
	for (int i=0;i<la; i++) {
      for (int j=0; j<cb; j++) {
      	C[i][j]=0;
        for (int k=0; k<ca; k++) {
          C[i][j] = C[i][j] + (A[i][k] * B[k][j]); 

        }

      }
    
    }
    for (int i=0; i<la; i++) {
      for (int j=0; j<cb; j++) {
        printf("%2.f ", C[i][j]);
		}
		printf("\n");
	}
		
}
