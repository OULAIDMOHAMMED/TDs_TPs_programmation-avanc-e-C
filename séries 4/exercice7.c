#include <stdio.h>
#include <string.h>

struct Produit {
    int Ref, Type, Qte;
    float Prix;
};

void remplirTableauProduits(struct Produit T[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Produit %d :\n", i + 1);
        
        printf("Entrez la reference : ");
        scanf("%d", &T[i].Ref);
        do
        {
        printf("Type du produit: \n 1: Cartes meres \n 2: Processeurs \n 3: Barettes memoire \n 4: Carte graphique \n---->");
        printf("    Entrez le type : ");
        scanf("%d", &T[i].Type);
        } while (T[i].Type < 1 || T[i].Type > 4);
        

        printf("Entrez la quantite : ");
        scanf("%d", &T[i].Qte);

        printf("Entrez le prix : ");
        scanf("%f", &T[i].Prix);

        printf("\n");
    }
}

void afficherTableauProduits(struct Produit T[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Produit %d :\n", i + 1);
        printf("Reference : %d\n", T[i].Ref);
        printf("Type : %d\n", T[i].Type);
        printf("Quantité : %d\n", T[i].Qte);
        printf("Prix : %.2f\n", T[i].Prix);
        printf("\n");
    }
}
void Commande(struct Produit T[],int n) {
    int type, qte, j;

    printf("\n\nSaisir votre commande SVP: \n");

    do {
        printf("Quel est le produit que vous voulez ? \n 1: Cartes meres \n 2: Processeurs \n 3: Barettes memoire \n 4: Carte graphique \n----> ");
        scanf("%d", &type);
    } while (type != 1 && type != 2 && type != 3 && type != 4);

    printf("Quelle est la quantite ? \n----> ");
    scanf("%d", &qte);

    for (j = 0; j < n; j++) {
        if (T[j].Type == type) {
            while (T[j].Qte < qte) {
                printf("La quantite disponible est insuffisante ! \n");
                printf("Quelle est la quantite ? \n----> ");
                scanf("%d", &qte);
            }
            printf("Le produit demandé est: ");

            if (T[j].Type == 1)
                printf("Carte mere \n");
            else if (T[j].Type == 2)
                printf("Processeur \n");
            else if (T[j].Type == 3)
                printf("Barrettes memoire \n");
            else if (T[j].Type == 4)
                printf("Cartes graphique \n");

            printf("---> La Reference du produit: %d \n", T[j].Ref);
            printf("---> Le prix total est: %.2f DH \n", qte * T[j].Prix);
        }
    }
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    struct Produit T[n];
    remplirTableauProduits(T, n);
    printf("Contenu du tableau :\n");
    afficherTableauProduits(T, n);
    Commande( T, n);

    return 0;
}

