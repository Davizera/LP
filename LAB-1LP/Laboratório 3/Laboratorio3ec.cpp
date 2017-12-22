#include <stdio.h>
#include <stdlib.h>   
main() {
       int opcaoMenu;         // variaveis auxiliares
       char opcaoSair;
       bool sair=false;
       int nl=2,nc=2; //num, de linhas e colunas da matrizes A,B,C;
	   float N;
	   float A[nl][nc],B[nl][nc],C[nl][nc];
       do {
           // limpa a tela e apresenta as opcoes do menu
           system("cls");
           printf("1-Leia Matriz A\n");
           printf("2-Leia Matriz B\n");
           printf("3-Imprima n*A\n");            
		   printf("4- Imprima A+B \n");
           printf("5- Imprima A*B \n");
           printf("6-Sair\n");
           printf("Selecione uma opcao do menu:");
           scanf("%i",&opcaoMenu);   
           // testa as opcoes do menu        
           switch (opcaoMenu) {
           		case 1:
					for (int i=0;i<nl;i++) {
						for (int j=0;j<nc;j++) {
							printf("infome o valor do elemento A[%i][%i]=",i+1,j+1);
							scanf("%f",&A[i][j]);
						}
					}
                break;
           		case 2:
                // Codigo para ler a matriz B
 					for (int i=0;i<nl;i++) {
						for (int j=0;j<nc;j++) {
							printf("infome o valor do elemento B[%i][%i]=",i+1,j+1);
							scanf("%f",&B[i][j]);
						}
					}               
                break;
           		case 3:
                // Imprimir C=n*A
					printf("Informe um numero N");
					scanf("%f",&N);
					//calcula C=N*A
					for (int i=0;i<nl;i++) {
						for (int j=0;j<nc;j++) {
							C[i][j]=N*A[i][j];
						}
					}
					//imprime  C
					for (int i=0;i<nl;i++) {
						for (int j=0;j<nc;j++) {
							printf("%10.2f",C[i][j]);
						}
						printf("\n");
					}		
					system("pause");		               
                break;
           		case 4:
                // Imprimir C=A+B
					//calcula C=A+B
					for (int i=0;i<nl;i++) {
						for (int j=0;j<nc;j++) {
							C[i][j]=A[i][j]+B[i][j];
						}
					}
					//imprime  C
					for (int i=0;i<nl;i++) {
						for (int j=0;j<nc;j++) {
							printf("%10.2f",C[i][j]);
						}
						printf("\n");
					}		
					system("pause");									               
                break;
           		case 5:
                // Imprimir C=A*B  
					//calcula C=A*B
					for (int i=0;i<nl;i++) {
						for (int j=0;j<nc;j++) {
							C[i][j]=0;
							for (int k=0;k<nc;k++) {
								C[i][j]=C[i][j]+A[i][k]+B[k][j];	
							}
						}
					}
					//imprime  C
					for (int i=0;i<nl;i++) {
						for (int j=0;j<nc;j++) {
							printf("%10.2f",C[i][j]);
						}
						printf("\n");
					}		
					system("pause");									               
 				        
                break;
           		case 6:
                	do {
                    	system("cls");
                    	printf("Digite S para sair e N para continuar(Pau no seu cu!!!):");
                    	scanf(" %c",&opcaoSair);                   
                	} while (opcaoSair!='S'&& opcaoSair!='s' && opcaoSair!='N' && opcaoSair!='n');
                	if (opcaoSair == 'S' || opcaoSair == 's') {
                   		sair=true; 
                	} 
                	break;                                     
           		default:
                	printf("Opcao Invalida\n");      
                	system("PAUSE");   
                	break;                                         
           } 
       } while(!sair);
}
