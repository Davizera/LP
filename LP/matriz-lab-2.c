#include <stdio.h>
#include  <stdlib.h>

void matAleato(int a, int b, int mat[][100]);
int randomValue();

main(){
	int linha,coluna, random;
	printf("informe o numero de linhas: ");scanf("%d",&linha);
	printf("informe o numero de colunas: ");scanf("%d",&coluna);
	int matriz[linha][coluna];
	matAleato(linha,coluna,matriz);
	random=randomValue();
	printf("\n\n%d\n",random);
}

void matAleato(int a, int b, int mat[][100]){
	int i, j, matCont[a][b],valor=0,repete;
	for (i = 0; i < a; i++){
		for (j = 0; j<b; j++){
		mat[i][j]=rand()%100;
		printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i <a ; i++){
		for(j=0;j<b;j++){
			if(mat[i][j]==valor){
				matCont[i][j]=repete;
				repete++;
			}
			printf("%d\t",matCont);
			valor++;
		}
	}

}

int randomValue(){
	return rand()%100;
}

