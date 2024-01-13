#include <stdio.h>
#include <string.h>

struct repertoire
{
    char nom[15], prenom[15];
    int telephone;
};

int main()
{
    int i, n;
    printf("Veuillez entrer le numEro du rEpertoire : ");
    scanf("%d", &n);
    struct repertoire liste[n];
    for (i = 0; i < n; i++)
    {
        printf("\nSaisir les informations pour le contact %d :\n", i + 1);

        printf("Nom : ");
        scanf("%s", liste[i].nom);

        printf("Prenom : ");
        scanf("%s", liste[i].prenom);

        printf("Telephone : ");
        scanf("%d", &liste[i].telephone);
    }
    printf("\nInformations des contacts dans le répertoire %d :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Contact %d :\n", i + 1);
        printf("Nom : %s\n", liste[i].nom);
        printf("Prenom : %s\n", liste[i].prenom);
        printf("Telephone : %d\n", liste[i].telephone);
        printf("\n");
    }

    return 0;
}
