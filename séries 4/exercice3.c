#include <stdio.h>
#include <string.h>

struct etudiant
{
    char nom[15], prenom[15];
    int CNE;
    float notes[4], moyenne;
};
void trierParMoyenne(struct etudiant T[])
{
    int i, j, min_idx;
    struct etudiant temp;

    for (i = 0; i < 4; i++)
    {
        min_idx = i;
        for (j = i + 1; j < 4; j++)
        {
            if (T[j].moyenne > T[min_idx].moyenne)
            {
                min_idx = j;
            }
        }
        temp = T[min_idx];
        T[min_idx] = T[i];
        T[i] = temp;
    }
}

int main()
{
    struct etudiant T[5];
    int i, j, k = -1;
    float M = 0, max;

    for (i = 0; i < 5; i++)
    {
        printf("Saisir les informations pour l'etudiant %d :\n", i + 1);
        printf(" Nom: ");
        scanf("%s", T[i].nom);
        printf(" Prenom: ");
        scanf("%s", T[i].prenom);
        printf(" CNE: ");
        scanf("%d", &T[i].CNE);
        printf(" Notes:\n");
        for (j = 0; j < 4; j++)
        {
            printf("    Note %d: ", j + 1);
            scanf("%f", &T[i].notes[j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        M = 0;
        for (j = 0; j < 4; j++)
        {
            M = M + T[i].notes[j];
        }
        T[i].moyenne = M / 4;
    }

    max = T[0].moyenne;
    for (i = 1; i < 5; i++)
    {
        if (T[i].moyenne > max)
        {
            max = T[i].moyenne;
            k = i;
        }
    }

    printf("La plus grande moyenne est %.2f\n", max);
    printf("Les informations de l'etudiant ayant la plus grande moyenne sont :\n");
    printf("  Nom: %s\n", T[k].nom);
    printf("  Prenom: %s\n", T[k].prenom);
    printf("  CNE: %d\n", T[k].CNE);
    printf("  Notes:\n");
    for (j = 0; j < 4; j++)
    {
        printf("   Note %d: %.2f\n", j + 1, T[k].notes[j]);
    }
    printf("  Moyenne: %.2f\n", T[k].moyenne);
    trierParMoyenne(T);
    printf("Tableau trie par moyenne :\n");
    for (i = 0; i < 5; i++)
    {
        printf("Nom: %s| Prenom: %s| CNE: %d| Moyenne: %f\n", T[i].nom, T[i].prenom, T[i].CNE, T[i].moyenne);
        printf("-------------------------------------------------------------------");
    }
    return 0;
}