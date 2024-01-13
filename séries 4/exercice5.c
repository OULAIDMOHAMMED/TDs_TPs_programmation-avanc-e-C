#include <stdio.h>
int nb_occurrence(char c, char T[], int n, int *p_occ, int *d_occ) {
    int nbo = 0,i;
    *p_occ = -1;
    *d_occ = -1;

    for (i = 0; i < n; i++) {
        if (T[i] == c) {
            nbo++;

            if (*p_occ == -1) {
                *p_occ = i;
            }
            *d_occ = i;
        }
    }

    return nbo;
}

int main() {
    int n;
    char c;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    char T[n];
    printf("Entrez une chaine de caracteres : ");
    scanf("%s", T);
    printf("Entrez un caractere : ");
    scanf(" %c",&c);
    int p_occ,d_occ,nombre_occ;
    nombre_occ=nb_occurrence(c, T,n,&p_occ, &d_occ);
    if (nombre_occ > 0) {
        printf("Le caractere '%c' apparait %d fois.\n", c, nombre_occ);
        printf("Premiere occurrence a la position : %d\n", p_occ);
        printf("Derniere occurrence a la position : %d\n", d_occ);
    } else {
        printf("Le caractere '%c' n'apparait pas dans le tableau.\n", c);
    }
    return 0;
}
