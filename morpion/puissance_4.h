#ifndef PUISSANCE_4_H
#define PUISSANCE_4_H

#include "grille.h"
#include "joueur.h"

static void puissance_4() {
    char grille[LIGNES][COLONNES];
    init_grille(grille);

    int joueur = 1;
    char jeton;
    int colonne;
    int coups = 0;

    while (1) {
        afficher_grille(grille);
        
        jeton = (joueur == 1) ? 'o' : 'x';
        colonne = demander_colonne(joueur);

        if (placer_jeton(grille, colonne, jeton)) {
            coups++;
            joueur = (joueur == 1) ? 2 : 1;
        }
    }
}

int main() {
    puissance_4();
    return 0;
}

#endif
