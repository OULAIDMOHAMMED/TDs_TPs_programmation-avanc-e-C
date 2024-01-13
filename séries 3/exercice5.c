#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int nbr_occ(char *phrase, char *mot) {
    int resultat = 0;
    char *p = phrase;

    while ((p = strstr(p, mot)) != NULL) {
        resultat++;
        p += strlen(mot);
    }

    return resultat;
}
int main(){
    char *mot;
    char *phrase;
    int k;
    mot= (char *)malloc(30 * sizeof(char));
    phrase=(char *)malloc(1000 * sizeof(char));
    printf("saiser un phrase:");
    gets(phrase);
    printf("saiser un mot:");
    scanf("%s",mot);
    k=nbr_occ(phrase,mot);
    printf("le nombre des Occurrence de cette mots dans la phrase est %d",k); 
}