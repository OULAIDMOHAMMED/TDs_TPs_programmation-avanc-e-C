#include <stdio.h>
int main(){
    int n,i=0,somme=0,min,sommepos=0,posmin;
    printf("entre le nombre numero %d:",i);
    scanf("%d",&n);
    min=n;
    posmin=n;
    do
    {
      i++;  
      printf("entre le nombre numero %d:",i);
      scanf("%d",&n);
      somme=somme+n;
      if (n<min)
      {
        min=n;
      } 
      if (n>0)
      {
        sommepos=sommepos+n;
        if (n<posmin)
        {
            posmin=n;
        }  
      } 
    } while (n!=999);
    printf("le nombre des valeur insere est:%d",i+1);
    printf("\n");
    printf("la somme des valeurs lues est:%d",somme-999);
    printf("\n");
    printf("le min des valeur est:%d",min);
    printf("\n");
    printf("la somme des valeurs positive est:%d",sommepos-999);
    printf("\n");
    printf("le min des valeur positive est:%d",posmin);
    
}
