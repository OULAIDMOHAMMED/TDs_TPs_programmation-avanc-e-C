#include <stdio.h>
#include <stdlib.h>

int recherche(float T[], int n, float k) {
    int i, j = -1;
    for (i = 0; i < n; i++) {
        if (T[i] == k) {
            j = i;
            break;
        }
    }
    return j;
}

int main() {
    int n, i, pos;
    float k;
    float *T;

    printf("Entre la taille du tableau : ");
    scanf("%d", &n);

    T = (float *)malloc(n * sizeof(float));
    for (i = 0; i < n; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%f", &T[i]);
    }

    printf("Entrez un nombre a rechercher : ");
    scanf("%f", &k);

    pos = recherche(T, n, k);

    if (pos == -1) {
        printf("%f introuvable dans le tableau.\n", k);
    } else {
        printf("La position de %.2f est %d.\n", k, pos+1);
    }
    free(T);

    return 0;
}