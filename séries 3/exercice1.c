#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inverserChaine(char *T, char *k) {
    int i;
    for (i = strlen(T)-1; i >= 0; i--) {
        k[strlen(T)-1 - i] = T[i];
    }
}

int main() {
    int i;
    char *T= (char *)malloc(30 * sizeof(char));
    char *k= (char *)malloc(30 * sizeof(char));

    printf("Veuillez saisir le nom : ");
    scanf("%s",T);
    
    inverserChaine(T,k);

    printf("Chaine inversee :\n ");
    for (i = 0; i < strlen(T); i++) {
        printf("k[%d] =%c\n", i + 1,k[i]);
    }
    free(T);
    free(k);
    return 0;
}

