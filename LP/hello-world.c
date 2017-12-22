#include <stdio.h>
#include <stdlib.h>
void obter();
main(){
	obter();
}

void obter(){
	int i,j,compara=0,aux,posicaoLinha,posicaoColuna, mat[3][3];
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("informe  valor da posicao [%d][%d]: ",i+1,j+1);scanf("%d",&mat[i][j]);
		}
	}
	for (i = 0; i < 3; i++){
		for(j=0;j<3;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0;i<3;i++){
		compara=0;
		for(j=0;j<3;j++){
			if(i==j){
				for(int k=0;k<3;k++){
					if(compara<=mat[i][k]){
						compara=mat[i][k];
						posicaoLinha=i;
						posicaoColuna=k;
						printf("%d ",compara);
						aux=mat[i][j];
						mat[i][j]=compara;
						mat[posicaoLinha][posicaoColuna]=aux;
					}
				}
			}
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}

}
