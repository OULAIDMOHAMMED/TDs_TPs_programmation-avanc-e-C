#include <stdio.h>

int longueur_chaine1(char T[]) {
    int i, k = 0;
    for (i = 0; T[i] != '0'; i++) {
        k++;
    }
    return k;
}

int main() {
    char cTab1[30], cTab2[30];
    int k, i;

    printf("Remplir le tableau (saisir null pour terminer) :\n");
    for (i = 0; i < 30; i++) {
        printf("cTab1[%d] = ", i + 1);
        scanf(" %c", &cTab1[i]);
        if (cTab1[i] == '0') {
            break; 
        }
    }

    printf("Remplir le deuxième tableau (saisir null pour terminer) :\n");
    for (i = 0; i < 30; i++) {
        printf("cTab2[%d] = ", i + 1);
        scanf(" %c", &cTab2[i]);
        if (cTab2[i] == '0') {
            break;
        }
    }

    k = longueur_chaine1(cTab1);
    i = longueur_chaine1(cTab2);

    printf("La longueur de la chaine 1 est : %d\n", k);
    printf("La longueur de la chaine 2 est : %d\n", i);

    return 0;
}
