#ifndef GRILLE_H
#define GRILLE_H

#include <stdlib.h>
#include <stdio.h>

#define LIGNES 6
#define COLONNES 7

void init_grille(char grille[LIGNES][COLONNES]) {
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            grille[i][j] = ' ';
        }
    }
}

void afficher_grille(char grille[LIGNES][COLONNES]) {
    system("clear");

    printf("  ");
    for (int i = 0; i < COLONNES; i++) {
        printf(" %d  ", i + 1);
    }
    printf("\n");

    for (int i = 0; i < LIGNES; i++) {
        printf("|");
        for (int j = 0; j < COLONNES; j++) {
            printf(" %c |", grille[i][j]);
        }
        printf("\n");
        printf("|");
        for (int j = 0; j < COLONNES; j++) {
            printf("---|");
        }
        printf("\n");
    }

    printf("  ");
    for (int i = 0; i < COLONNES; i++) {
        printf(" %d  ", i + 1);
    }
    printf("\n");
}

#endif
