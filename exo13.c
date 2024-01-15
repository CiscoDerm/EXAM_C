// Réaliser un programme qui affiche à partir des deux tableaux toutes les cartes d'un jeu de 32 cartes.
// Cartes = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, Valet, Dame, Roi
// Couleurs = Coeur, Carreau, Pique, Trèfle

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *cartes[] = {"1","2","3","4","5","6","7","8","9","10","Valet","Dame","Roi"};
    char *couleurs[] = {"Coeur","Carreau","Pique","Trefle"};

    int i,j;

    for (i = 0 ; i < 13 ; i++)
    {
        for (j=0 ; j < 4 ; j++)
        {
            printf("%s de %s\n", cartes[i], couleurs[j]);
        }
    }

    return 0;
}