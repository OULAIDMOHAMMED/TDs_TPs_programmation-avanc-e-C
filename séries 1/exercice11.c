#include<stdio.h>

int main() {
    int n = 0, choix;

    printf("Donner un entier : ");
    scanf("%d", &n);
    printf("La valeur de l'entier est : %d\n", n);

    do {
        printf("\n 1. Ajouter 2\n 2. Multiplier par 3\n 3. Soustraire 5\n 4. Quitter\nChoisir entre 1 et 4 : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("La nouvelle valeur est : %d\n", n + 2);
                break;
            case 2:
                printf("La nouvelle valeur est : %d\n\n", n * 3);
                break;
            case 3:
                printf("La nouvelle valeur est : %d\n\n", n - 5);
                break;
            case 4:
                break;
            default:
                printf("Choix non valide. Veuillez choisir entre 1 et 4.\n");
        }
    } while (choix != 4);

    return 0;
}
