#include <stdio.h>

void jour(int iNb_jours[12]) {
    int i;
    for (i = 0; i < 12; i++) {
        if (i == 1) {
            iNb_jours[i] = 28;
        } else if ((i % 2 == 0 && i <= 7) || (i % 2 != 0 && i > 7)) {
            iNb_jours[i] = 31;
        } else {
            iNb_jours[i] = 30;
        }
    }
}

void affichage(int iNb_jours[12]) {
    int i;
    for (i = 0; i < 12; i++) {
        printf("Les jours du mois %d sont : %d\n", i + 1, iNb_jours[i]);
    }
}

int main() {
    int iNb_jours[12];
    jour(iNb_jours);
    affichage(iNb_jours);
}
