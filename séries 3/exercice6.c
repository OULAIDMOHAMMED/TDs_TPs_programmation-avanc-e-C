#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* suprimer(char *ph, char *p){
    while (*p==' ')
    {
        p++;
        return p;
    }
}
int main(){
    char *p;
    char *phrase;
    phrase=(char *)malloc(1000 * sizeof(char));
    printf("saiser un phrase avec un espase au debut:");
    gets(phrase);
    p=phrase;
    p=suprimer(phrase,p);
    printf("%s",p);
}