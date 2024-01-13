#include <stdio.h>
#include <stdlib.h>

struct TypeTableau {
    int nb_elem;
    int *tab;
};

struct TypeTableau creerTableau(int n) {
    struct TypeTableau T;
    T.nb_elem = n;
    T.tab = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        T.tab[i] = 0;
    }

    return T;
}
void DestructionTableau(struct TypeTableau T){
free(T.tab);
}
void Simple_Lecture_Tab(struct TypeTableau T){
int i;
printf("\nVeuillez remplir le tableau: \n");
for(i=0; i<T.nb_elem; i++){
printf("T[%d] = ",i);
scanf("%d",&T.tab[i]);
}
}
void Affichage(struct TypeTableau T){
int i;
printf("le tableau est: \n");
for(i=0; i<T.nb_elem; i++) {
    printf("%d\t", T.tab[i]);
}
printf("\n");
}

struct TypeTableau Double_Tab(struct TypeTableau T){
int i;
struct TypeTableau NVT;
NVT.nb_elem = T.nb_elem;
NVT.tab = (int*)malloc( NVT.nb_elem * sizeof(int) );
for(i=0; i<NVT.nb_elem; i++)
NVT.tab[i] = 2 * T.tab[i];
return NVT;
}
int main() {
    int n;
    struct TypeTableau T;
    struct TypeTableau NVT;
    printf("Donner la taille du tableau: ");
    scanf("%d",&n);
    T = creerTableau(n);
    Simple_Lecture_Tab(T);
    Affichage(T);
    NVT=Double_Tab(T);
    printf("Après le doublonnement des éléments:\n");
    Affichage(NVT);
    DestructionTableau(T);
    DestructionTableau(NVT);
}