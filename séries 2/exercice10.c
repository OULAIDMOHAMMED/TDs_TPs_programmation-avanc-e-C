#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int distanceH(char* s1,char* s2){
 int i,n=0;
 for(i=0;i<strlen(s1);i++){
 if(s1[i] != s2[i]){
 n++;
 }
 }
 return n;
}
int distanceH_langage(char **langage, int lin) {
    int min = 50, i, j;
    for (i = 0; i < lin; i++) {
        for (j = i + 1; j < lin; j++) {
            int distance = distanceH(langage[i], langage[j]);
            if (distance < min) {
                min = distance;
            }
        }
    }
    return min;
}
void converte_binaire(int binaire[], int nombre) {
    for (int i = 7; i >= 0; i--) {
        binaire[i] = nombre % 2;
        nombre /= 2;
    }
}
int distanceH_numbers(int bi1[8],int bi2[8]){
 int i,cmp=0;
 for(i=0;i<8;i++){
 if(bi1[i] != bi2[i]){
 cmp++;
 }
 }
 return cmp;
}
int main(){
    int i,lin,h,k,cmp;
    char *s1,*s2;
    int bi1[8],bi2[8];
    int nmb1,nmb2;
    s1=(char*)malloc(100*sizeof(char));
    s2=(char*)malloc(100*sizeof(char));
    printf("donne la premeir chaine:");
    gets(s1);
    printf("donne la deuxième chaine chaine:");
    gets(s2);
    h=distanceH(s1,s2);
    printf("la distance de hamming de deux chaine est %d\n",h);
    printf("donne moi le nombre des mots");
    scanf("%d",&lin);
    char **langage = (char **)malloc(lin* sizeof(char *));
    for (int i = 0; i <100; i++) {
        langage[i] = (char *)malloc(100 * sizeof(int));
    }
    for (i = 0; i < lin; i++) {
        printf("Saisissez le mot pour la ligne %d : ", i + 1);
        scanf("%s", langage[i]);
    }
    k=distanceH_langage(langage,lin);
    printf("la distance de hamming de langage est %d",k);
    printf("---------------------------\n");
    printf("Pour convertir les nombres\n");

    printf("Donne le premier nombre : ");
    scanf("%d", &nmb1);
    converte_binaire(bi1, nmb1);
    printf("%d en binaire est :\n", nmb1);
    for (int i = 0; i < 8; i++) {
        printf("%d\t", bi1[i]);
    }
    printf("\n");

    printf("Donne le deuxieme nombre : ");
    scanf("%d", &nmb2);
    converte_binaire(bi2, nmb2);
    printf("%d en binaire est :\n", nmb2);
    for (int i = 0; i < 8; i++) {
        printf("%d\t", bi2[i]);
    }
    printf("\n");
    cmp=distanceH_numbers(bi1,bi2);
    printf("La distance de Hamming entre les nombres %d et %d est : %d",nmb1,nmb2,cmp);

}