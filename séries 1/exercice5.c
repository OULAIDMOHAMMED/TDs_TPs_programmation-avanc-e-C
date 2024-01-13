#include <stdio.h>

int main(){
    int a,i,k;
    printf("saisir un nombre ");
    scanf("%d",&a);
    k=1;
    for ( i = 2; i < a; i++)
    {
        if(a % i==0){
            k=0; 
        }  
    }
    if(k==0){
        printf("le nombre %d n est pas premier",a);
    }
    else{
        printf("le nombre %d est premier",a);
    }   
}