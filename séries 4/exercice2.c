#include <stdio.h>
#include <string.h>
struct date
{
 int jour;
 char moins[10];
 int annee;
};
struct employe
{
    char nom[15];
    char prenom[15];
    struct date date_naissance,date_embauche;
    
};
int main(){
    int i;
    struct employe empl[4];
    for ( i = 0; i < 4; i++)
    {
        printf("nom:");
        scanf("%s",empl[i].nom);
        printf("prenom:");
        scanf("%s",empl[i].prenom);
        printf("la date de naissance:");
        printf("    le jour:");
        scanf("%d",&empl[i].date_naissance.jour);
        printf("    le moin:");
        scanf("%s",empl[i].date_naissance.moins);
        printf("    annee:");
        scanf("%d",&empl[i].date_naissance.annee);
        printf("la date d embauche:");
        printf("    le jour:");
        scanf("%d",&empl[i].date_embauche.jour);
        printf("    le moin:");
        scanf("%s",empl[i].date_embauche.moins);
        printf("    annee:");
        scanf("%d",&empl[i].date_embauche.annee);
    }
    for ( i = 0; i < 4; i++)
    {
        printf("pour les informations de employes %d",i+1);
        printf("nom:%s",empl[i].nom);
        printf("prenom:%s",empl[i].prenom);
        printf("la date de naissance:%d %s %d",empl[i].date_naissance.jour,empl[i].date_naissance.moins,empl[i].date_naissance.annee);
        printf("la date d embauche:%d %s %d",empl[i].date_embauche.jour,empl[i].date_embauche.moins,empl[i].date_embauche.annee);
    }   
}
