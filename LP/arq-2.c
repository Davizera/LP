#include <stdio.h>
#include <string.h>
main(){
char Str[100];
char result;
FILE *arq;

 arq = fopen("ArqGrav.txt", "wt");  // Cria um arquivo texto para gravação
if (arq == NULL) // Se não conseguiu criar
{
   printf("Problemas na CRIACAO do arquivo\n");
   return;
}
printf("fale algo: ");scanf("%[^\n]",Str);
fputs(Str, arq);
if (result == EOF)
    printf("Erro na Gravacao\n");
 fclose(arq);
 }