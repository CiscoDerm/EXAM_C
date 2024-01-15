// Ecrire un programme qui, à partier de la saisie d'un rayon et d'une hauteur, calcule et affiche le volume d'un cylindre.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float rayon, hauteur, volume;

    printf("Saisir le rayon du cylindre : ");
    scanf("%f", &rayon);
    printf("Saisir la hauteur du cylindre : ");
    scanf("%f", &hauteur);

    volume = 0.33333333 * 3.14 * rayon * rayon * hauteur;

    printf("Le volume du cylindre est de : %f\n", volume);

    return 0;
}