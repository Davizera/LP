#include <stdio.h>

void diagonalPrincipal(int mat[][3]);
void quantidade(int mat2[][3],int num);
void somaMatriz(int mat3[][3]);

main(){
	int matrizTeste[3][3],valor;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("informe o valor da posicao linha %d coluna %d: ",i+1,j+1);scanf("%d",&matrizTeste[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d \t",matrizTeste[i][j]);
		}
		printf("\n");
	}
	diagonalPrincipal(matrizTeste);
	printf("escolha um numero: ");scanf("%d",&valor);
	quantidade(matrizTeste,valor);
	somaMatriz(matrizTeste);
}

void diagonalPrincipal(int mat[][3]){
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				printf("%d",mat[i][j]);
			}else if (i != j){
				printf("  ");
			}
		}
		printf("\n");
	}
}

void quantidade(int mat2[][3], int num){
	int i, j, a, cont=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(mat2[i][j]== a){
				cont++;
			}
		}
	}
	printf("o numero de vezes q esse numero se repte e %d \n", cont++);
}

void somaMatriz(int mat3[][3]){
	int i, j, soma=0;
	for(i=0;i<3;i++){
		soma=0;
		for(j=0;j<3;j++){
			soma+=mat3[i][j];
		}
		printf("%d\n",soma);
	}
	printf("a soma total e igual a %d \n",soma);
}
