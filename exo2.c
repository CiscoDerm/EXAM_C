// Une machine à jet pressurisé decoupe dans une feuille de verre de 4x4 metres de vitre de lagreur La et de longueur Lo preforé d'un trou de rayon R pour y installer un ventilateur.
// Apres avoir saisi les valeurs de La, Lo et R, le programme doit calculer et afficher la surface de verre restante.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float La, Lo, R, surface;

    printf("Saisir la largeur de la vitre : ");
    scanf("%f", &La);
    printf("Saisir la longueur de la vitre : ");
    scanf("%f", &Lo);
    printf("Saisir le rayon du trou : ");
    scanf("%f", &R);

    surface = La * Lo - 3.14 * R * R;

    printf("La surface de verre restante est de : %f\n", surface);

    return 0;
}

