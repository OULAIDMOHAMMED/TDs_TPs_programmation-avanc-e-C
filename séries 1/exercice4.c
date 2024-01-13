#include <stdio.h>

int main(){
    float  prix,remise;
    printf("saisir le prix du produit ");
    scanf("%f",&prix);
    if(prix<100){
        printf("prix initial: %f dhs\n",prix);
        remise=prix*0.3;
        printf("remise: %.4f dhs\n",remise);
        printf("prix final: %.4fdhs",prix-remise);
    }
    else if (prix>=100 && prix<=200)
    {
        printf("prix initial: %fdhs\n",prix);
        remise=prix*0.4;
        printf("remise: %.4fdhs\n",remise);
        printf("prix final: %.4f dhs",prix-remise);
    }
    else if (prix>200)
    {
        printf("prix initial: %fdhs\n",prix);
        remise=prix*0.5;
        printf("remise: %.4f dhs\n",remise);
        printf("prix final: %.4f dhs",prix-remise);
    }
}