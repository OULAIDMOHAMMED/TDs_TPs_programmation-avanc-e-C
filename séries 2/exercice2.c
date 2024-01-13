#include <stdio.h>

void afiche(int iMat[5][5]){
    int i,j;
    for ( i = 0; i < 5; i++)
    {
      for ( j = 0; j < 5; j++)
      {
        printf("iMat[%d][%d]=%d",i,j,iMat[i][j]);
        printf("\n");
      }
      
    }
    
}
int main(){
    int iMat[5][5];
    int i,j;
    printf("Remplir le tableu");
    printf("\n");
    for ( i = 0; i < 5; i++)
    {
      for ( j = 0; j < 5; j++)
      {
        printf("iMat[%d][%d]=",i,j);
        scanf("%d",&iMat[i][j]);
      } 
    } 
    printf("Affichage de tableau");
    printf("\n");
    afiche(iMat);
}
