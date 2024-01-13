#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int age;
    int sexe;

    printf("entrez votre age \n");
    scanf("%d",&age);

    printf("Choisissez  votre sexe : \n \t 1-Masculin \t 2-femunin  \n");
    scanf("%d",&sexe);

    if((sexe == 1 && age >= 20) || (sexe == 2 && age >=18 && age <= 35))
    printf("\n Vous etes Imposable  \n");
    else 
    printf("\n Vous n etes pas Imposable  \n");




}