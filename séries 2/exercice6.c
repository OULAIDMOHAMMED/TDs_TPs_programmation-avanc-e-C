#include <stdio.h>

int main() {
    char phrase[100];
    int i, chiffres = 0, espaces = 0, autres = 0;

    printf("Saisissez une phrase : ");
    gets(phrase);

    for (i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] >= '0' && phrase[i] <= '9') {
            chiffres++;
        } else if (phrase[i] == ' ') {
            espaces++;
        } else {
            autres++;
        }
    }

    printf("Nombre de chiffres : %d\n", chiffres);
    printf("Nombre d'espaces : %d\n", espaces);
    printf("Nombre d'autres caractesres : %d\n", autres);
    return 0;
}
