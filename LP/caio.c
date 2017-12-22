#include <stdio.h>
#include <stdlib.h>
void imprime (int *n, int m);
int main () {
	int x;
	printf("Declare X: ");
	scanf("%d",&x);
	int v[x];
	for (int j=0; j<x; j++) {
		printf("Digite x%d: ",j+1);
		scanf("%d",&v[j]);
	}
	imprime (v,x);
	return 0;
}
void imprime (int *n, int m) {
	int i,j,cont;
	for (i=0; i<m; i++) {
		for (j=i+1; j<m; j++) {
			if (n[j]>n[i]) {
				cont=n[i];
				n[i]=n[j];
				n[j]=cont;
			}
		}
		printf("%d ",n[i]);
	}
}
