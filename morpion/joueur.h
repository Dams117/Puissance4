#ifndef JOUEUR_H
#define JOUEUR_H

#include <stdio.h>
#include "grille.h"

int demander_colonne(int joueur) {
    int colonne;
    printf("\nJoueur %d, choisissez une colonne (1 à 7) : ", joueur);
    scanf("%d", &colonne);
    while (colonne < 1 || colonne > 7) {
        printf("Colonne invalide. Choisissez une colonne (1 à 7) : ");
        scanf("%d", &colonne);
    }
    return colonne - 1;
}

int placer_jeton(char grille[LIGNES][COLONNES], int colonne, char jeton) {
    for (int i = LIGNES - 1; i >= 0; i--) {
        if (grille[i][colonne] == ' ') {
            grille[i][colonne] = jeton;
            return 1;
        }
    }
    printf("Cette colonne est pleine. Choisissez une autre colonne.\n");
    return 0;
}

#endif
