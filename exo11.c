// Ecrire un programme qui possède une fonction sommesuite(valeur) avec passage de parametre par adresse qui réalise la somme de toute les valeurs de 0 a valeur.

#include <stdio.h>
#include <stdlib.h>

void sommesuite(int *valeur)
{
    int i, somme = 0;

    for (i = 0 ; i <= *valeur ; i++)
    {
        somme += i;
    }

    printf("La somme de toutes les valeurs de 0 a %d est de : %d\n", *valeur, somme);

    return;
}

int main(void)
{
    int valeur;

    printf("Saisir une valeur : ");
    scanf("%d", &valeur);

    sommesuite(&valeur);

    return 0;
}