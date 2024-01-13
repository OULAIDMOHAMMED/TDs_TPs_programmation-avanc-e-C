#include <stdio.h>
#include <stdlib.h>

int longeur(char*T){
    int j=0;
    char *P;
    for ( P = T; *P!='\0'; P++)
    {
        j++;
    }
    return j;
}
void inverserChaine(char *T, char *k) {
    int i,j;
    j=longeur(T);
    for (i = j-1; i >= 0; i--) {
        k[j-1 - i] = T[i];
    }
}
int main(){
    char *T= (char *)malloc(30 * sizeof(char));
    char *k= (char *)malloc(30 * sizeof(char));
    printf("Veuillez saisir le mots : ");
    scanf("%s",T);
    inverserChaine(T,k);
    if (*T!=*k)
    {
        printf("le mots non palindrome");
    }
    else{
        printf("le mots  palindrome");
    }
    
}