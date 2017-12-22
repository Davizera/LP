#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5

void trocar(int mat[][TAM]){
	int maior[2], segura, i, j, hold;
	for (j = 0; j < TAM; j++){
		maior[0] = 0;
		maior[1] = j;
		for (i = 0; i < TAM; i++){
			if (mat[i][j] > mat[maior[0]][maior[1]]) {
				maior[0] = i;
				maior[1] = j;
			}
		}
		hold = mat[maior[0]][maior[1]];
		mat[maior[0]][maior[1]] = mat[maior[1]][maior[1]];
		mat[maior[1]][maior[1]] = hold;
	}
}
void main(){
	int matriz[TAM][TAM], i, j;

	srand(time(NULL));

	for (j = 0; j < TAM; j++){
		for (i = 0; i < TAM; i++){
			matriz[i][j] = rand()%10;
			matriz[i][j] -= rand()%10;
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	trocar(matriz);

	for (j = 0; j < TAM; j++){
		for (i = 0; i < TAM; i++){
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
}
