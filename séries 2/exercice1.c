#include <stdio.h>

int tab[21];
int moyenne(int T[20]) {
    int moy = 0, i;

    for (i = 0; i < 20; i++) {
        moy += T[i];
    }

    return moy / 20;
}

int trouverIndiceMax(int T[20]) {
    int indiceMax = 0;

    for (int i = 1; i <20 ; i++) {
        if (T[i] > T[indiceMax]) {
            indiceMax = i;
        }
    }

    return indiceMax;
}
void supprimerMax(int T[20]) {
    int indiceMax = trouverIndiceMax(T);
    for (int i = indiceMax; i < 19; i++) {
        T[i] = T[i + 1];
    }
}
int trouverIndiceMin(int T[20]) {
    int indiceMin = 0;

    for (int i = 1; i < 20; i++) {
        if (T[i] < T[indiceMin]) {
            indiceMin = i;
        }
    }

    return indiceMin;
}
void supprimerMin(int T[20]) {
    int indiceMin = trouverIndiceMin(T);
    for (int i = indiceMin; i < 19; i++) {
        T[i] = T[i + 1];
    }
}
void ajoutepos(int T[20], int k, int j) {
    int i;
    for (i = 0; i < 20; i++) {
        if (i < j) {
            tab[i] = T[i];
        }
        if (i == j) {
            tab[i] = k;
            tab[i+1]=T[i];
        }
        if (i>j) {
            tab[i+1] = T[i];
        }
    }
}


int main() {
    int T[20], i, moyen;

    printf("Remplir le tableau :\n");
    for (i = 0; i < 20; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }

    moyen = moyenne(T);
    printf("La moyenne est : %d\n", moyen);
    supprimerMax(T);
    supprimerMin(T);
    printf("Tableau apres supreme de max et de min :\n");
    for (i = 0; i < 18; i++) {
        printf("T[%d] = %d\n", i + 1, T[i]);
    }
    int k, j;
    printf("Entrer le nombre pour ajouter : ");
    scanf("%d", &k);
    printf("Entrer la position : ");
    scanf("%d", &j);
    ajoutepos(T, k, j);

    printf("Tableau après ajout :\n");
    for (i = 0; i < 19; i++) {
        printf("T[%d] = %d\n", i + 1, tab[i]);
    }
    return 0;
}
