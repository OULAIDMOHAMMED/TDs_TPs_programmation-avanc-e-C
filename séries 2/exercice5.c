#include <stdio.h>

void crypte(char cMessag[]) {
    int i;
    for (i = 0; cMessag[i] != '\0'; i++) {
        if (cMessag[i] >= 'A' && cMessag[i] <= 'Z') {
            cMessag[i] = (cMessag[i] - 'A' + 5) % 26 + 'A';
        } else if (cMessag[i] >= 'a' && cMessag[i] <= 'z') {
            cMessag[i] = (cMessag[i] - 'a' + 5) % 26 + 'a';
        }
    }
}

int main() {
    int n, i;

    printf("Entre la longueur de la chaine de caracteres : ");
    scanf("%d", &n);
    char cMessag[n];
    printf("Entre la chaine de caracteres : ");
    for (i = 0; i < n; i++) {
        scanf(" %c", &cMessag[i]);
    }

    crypte(cMessag);

    printf("L affichage du tableau apres le cryptage :\n");
    for (i = 0; i < n; i++) {
        printf("cMessag[%d] = %c\n", i+1, cMessag[i]);
    }

    return 0;
}