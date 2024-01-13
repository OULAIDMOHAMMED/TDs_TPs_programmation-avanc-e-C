#include <stdio.h>
#include <string.h>

struct panneau
{
    float largeur,longueur,epaisseur;
    int type;
};
void lirePanneau(struct panneau *p) {
    printf("Entrez la largeur du panneau : ");
    scanf("%f", &(p->largeur));

    printf("Entrez la longueur du panneau : ");
    scanf("%f", &(p->longueur));

    printf("Entrez l'epaisseur du panneau en millimetres : ");
    scanf("%f", &(p->epaisseur));
    printf("1-Pin|2-chene|3-hetre\n");
    printf("Entrez le type du panneau : ");
    scanf("%d", &(p->type));
}
void afficherPanneau(const struct panneau *p) {
    printf("Largeur : %.2f\n", p->largeur);
    printf("Longueur : %.2f\n", p->longueur);
    printf("Epaisseur : %.2f mm\n", p->epaisseur);
    printf("Type : %d\n", p->type);
}
float calculerVolume(const struct panneau *p) {
    float epaisseur_metres = p->epaisseur / 1000;
    return p->largeur * p->longueur * epaisseur_metres;
}
int main() {
    struct panneau P;
    lirePanneau(&P);
    printf("\nVoici le panneau saisi :\n");
    afficherPanneau(&P);
    float volume = calculerVolume(&P);
    printf("Le volume du panneau est : %.4f m3\n", volume);
    return 0;
}