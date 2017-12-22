#include <stdio.h>
#include <stdlib.h>

main(){
  int i,j;
  int mat1[2][2]={{3,2},{-4,6}};
  int mat2[2][2]={{0,0},{0,0}};
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf(" %d ",mat1[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      mat2[j][i]=mat1[i][j];
    }
  }
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("%d ",mat2[i][j]);
    }
    printf("\n");
  }
}
