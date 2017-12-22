/*
Escreva um programa para o c�lculo das propriedades geom�tricas de pol�gonos fechados 
(�rea, per�metro e centr�ide). O programa dever� solicitar o n�mero de v�rtices do pol�gono 
e imprimir todas as suas propriedades. 
Finalmente, o seu programa dever� imprimir as coordenadas dos v�rtices da caixa de contorno 
do pol�gono (Xa,Ya) e (Xb,Yb). A caixa de contorno � o menor ret�ngulo que envolve todo o pol�gono. 
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
main() {      
   int numVertices;          	// numero de vertices
   float area,perimetro,xc,yc; // area,perimetro e coordenadas do centroide
   float xa,ya,xb,yb;          // coordenadas da caixa de contorno

   // le o numero de vertices
   do {
      printf("Informe o numero de vertices do poligono (>3): "); 
      scanf("%i",&numVertices);            
      system("cls");                 
   } while (numVertices<3); 
   
    
   float verticesX[numVertices+1];   	// coordenadas X dos vertices 
   float verticesY[numVertices+1];  	// coordenadas X dos vertices 

   // le as coordenadas dos vertices
   for (int i=0;i<numVertices;i++) {
       printf("\nCoordenadas X e Y do vertice %i=",i); 
       scanf("%f %f",&verticesX[i],&verticesY[i]);
   }
   // ultimo vertice igual ao primeiro (poligono fechado)
   verticesX[numVertices]=verticesX[0];
   verticesY[numVertices]=verticesY[0];
   
   // calcula a area
   area=0;
   for (int i=0;i<numVertices;i++) {
       area+=(verticesX[i]*verticesY[i+1]-verticesX[i+1]*verticesY[i])/2;
   }   
   // calcula perimetro
   perimetro=0;
   for (int i=0;i<numVertices;i++) {
       perimetro+=sqrt(pow(verticesX[i+1]-verticesX[i],2)+ pow(verticesY[i+1]-verticesY[i],2));
   }   
   
   // calcula o centroide 
   xc=0;
   yc=0;   
   
   for (int i=0;i<numVertices;i++) {
       xc+=((verticesX[i]+verticesX[i+1])*((verticesX[i]*verticesY[i+1]-verticesX[i+1]*verticesY[i]))/(6*area));
       yc+=((verticesY[i]+verticesY[i+1])*((verticesX[i]*verticesY[i+1]-verticesX[i+1]*verticesY[i]))/(6*area));
   }
 
   // Determina��o as coordenadas do ret�ngulo de contorno
   xa=xb=verticesX[0];
   ya=yb=verticesY[0];
   for (int i=1;i<numVertices;i++) {
       if (verticesX[i]<xa) {
          xa=verticesX[i];
       }
       if (verticesX[i]>xb) {
          xb=verticesX[i];
       }
       if (verticesY[i]<ya) {
          ya=verticesY[i];
       }
       if (verticesY[i]>yb) {
          yb=verticesY[i];
       }                             
   }
   // garante que a area sempre ser� positiva
   if (area<0) {
      area=-area;
   }   
   printf("area=%f m2\n",area);
   printf("perimetro=%f m\n",perimetro);
   printf("centroide=(%f,%f)\n",xc,yc);
   printf("retangulo de contorno=(%f,%f) e (%f,%f)\n",xa,ya,xb,yb);
   system("pause");
}
