#include  <stdio.h>
#include  <stdlib.h>

void multiplica(int ca,int la,int cb,int lb,int mat1[][20],int mat2[][20]);
main(){
	int lA,cA,lB,cB;
	printf("informe o numero de linhas de A: ");scanf("%d",&lA);
	printf("informe o  numero de colunas de A: ");scanf("%d",&cA);
	printf("informe o numero de linhas de B:");scanf("%d",&lB);
	printf("informe o numero de colunas de B:");scanf("%d",&cB);
	int matA[cA][lA],matB[cB][lB];
	multiplica(cA,lA,cB,lB,matA,matB);
}

void multiplica(int ca,int la,int cb,int lb,int mat1[][20],int mat2[][20]){
	int i,j, matC[la][cb],k;
	if(ca!=lb){
		printf("nao e possivel multiplicar as matrizes!\n");
	}else{
		for(i=0;i<la;i++){
			for(j=0;j<ca;j++){
				scanf("%d",&mat1[i][j]);
			}
		}
		for(i=0;i<la;i++){
			for(j=0;j<ca;j++){
				printf("%d\t",mat1[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<lb;i++){
			for(j=0;j<cb;j++){
				scanf("%d",&mat2[i][j]);
			}
		}
			for(i=0;i<lb;i++){
			for(j=0;j<cb;j++){
				printf("%d\t",mat2[i][j]);
			}
		printf("\n");
		}
		for(i=0;i<ca;i++){
			for(j=0;j<lb;j++){
				matC[i][j]=0;
				for(k=0;k<la;k++){
					matC[i][j]+=mat1[i][k]*mat2[k][j];
				}
			}
		}
		for(i=0;i<la;i++){
			for(j=0;j<cb;j++){
				printf("%d\t",matC[i][j]);		
		}
		printf("\n");
	}

	}
	
}
