#include <stdio.h>
#include <stdlib.h>

int main(){
    float t[3][4];
    int i,j;
    float somme,sommee2;
    printf("-----------------------------------------\n");
    printf("la premier methode\n");
    printf("remplir le tableau\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 4; j++)
       {
          printf("t[%d][%d]=",i,j);
          scanf("%f",&t[i][j]);
       }  
    }
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 4; j++)
       {
         somme=somme+t[i][j];
       }  
    }
    printf("la somme par la methode 1 est %.2f\n",somme);
    printf("-----------------------------------------\n");
    printf("la deuxième methode\n");
    float **k;
    k = (float**)malloc(3*sizeof(float*));
    for(i=0; i<4; i++)
     *(k+i) = (float*)malloc(4*sizeof(float));
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("k[%d][%d]= ", i, j);
            scanf("%f", &k[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 4; j++)
       {
         sommee2=sommee2+k[i][j];
       }  
    } 
    printf("la somme par la methode 2 est %.2f",sommee2);

}