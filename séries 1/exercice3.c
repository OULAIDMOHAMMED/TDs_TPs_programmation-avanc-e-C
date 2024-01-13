#include <stdio.h>

int main(){

    int nb;
    printf("entrer le nombre des feuilles: ");
    scanf("%d",&nb);
    if(nb<=10){
            printf("le totale:%d",nb);
    }
    else if(nb>10 && nb<=30){
        printf("le totale:%.2f",10*1+(nb-10)*0.6);
    }
    else if(nb>30){
        printf("le totale:%.2f",10*1+(nb-20)*0.6+(nb-30)*0.4);
    }
    return 0;
}