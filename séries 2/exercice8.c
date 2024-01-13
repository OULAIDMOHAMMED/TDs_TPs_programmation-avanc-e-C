#include <stdio.h>
#include <string.h>

int main() {
    char noms[20][20];
    int i = 0;
    printf("Saisissez les noms (entrez 'fin' pour terminer) :\n");
    while (i < 20) {
        printf("Saisir le nom %d : ", i + 1);
        scanf("%s", noms[i]);

        
        if (strcmp(noms[i], "fin") == 0) {
            break;
        }

        i++;
    }
    printf("Les noms ayant plus de dix caracteres sont :\n");
    for (int j = 0; j < i; j++) {
        if (strlen(noms[j]) > 10) {
            printf("%s\n", noms[j]);
        }
    }

    return 0;
}
