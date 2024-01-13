#include <stdio.h>
int main(){
    int n,k=0,i=0;
    do
    {
        printf("entre le nombre numero %d:",i);
        scanf("%d",&n);
        i++;
        if (n % 2==0){
         k++;
         printf("le nombre %d est pair",n);
         printf("\n");
         printf("le carre de nombre %d est",n*n);
         printf("\n");
        }
    } while (n!=100);
    printf(" %d nombre paires",k);
    printf("\n");
    printf(" %d le total des nombre",i);
    printf("\n");   
}