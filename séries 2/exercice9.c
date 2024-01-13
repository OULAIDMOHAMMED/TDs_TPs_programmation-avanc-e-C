#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu(){
 printf("\n================= MENU =================\n");
 printf("Choisir votre operation : \n");
 printf("1. Saisir. \n2. Afficher. \n3. Inverser. \n4. Compte les mots.\n5. Quitter. \n");
}
char* saisir(){
 char *T = (char*)malloc(50*sizeof(char));
 printf("\nDonnez la chaine : ");
 getchar();
 gets(T);
 return T;
}
void affiche(char* s){
 printf("votre chaine est : %s \n",s);
}
void inverser(char *T){
 int i,j;
char T2[strlen(T)];
 strcpy(T2,T);
for(i=0;i<strlen(T);i++){
 T[i] = T2[strlen(T)-i-1];
}
printf("L'inverse de votre chaine est : %s",T);
}
int compterMots(char* T) {
    int nombreMots = 0;
    int Mot = 0;
    for (int i = 0; i < strlen(T); i++) {
        if (T[i] == ' ' || T[i] == '\t' || T[i] == '\n') {
            Mot = 0;
        } else {
            if (!Mot) {
                Mot = 1;
                nombreMots++;
            }
        }
    }

    return nombreMots;
}
int main(){
 char *T;
 int nambrem;
int choix;
do{
 menu();
 printf("Votre choix : ");
 scanf("%d",&choix);
 printf("\n========================================\n");
 if(choix == 1){
 T = saisir();
 }
 else if(choix == 2){
 affiche(T);
 }
 else if(choix == 3){
 inverser(T);
 }
 else if(choix == 4){
 nambrem=compterMots(T);
 printf("le nombres des mots est :%d",nambrem);
 }
}while(choix != 5);
}
