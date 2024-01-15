// Un vigile de sécurité travaille chaque semaine dans un batiment différent. Il doit faire une ronde n fois par jour. Le batiment fait e étages où chaque palier compte m marches de 16cm. Son bureau est au RDC. Ecrire une procedure hauteurParcourue qui reçoit les parametres suivant : Le nombre de ronde : r , le nombre d'étages : e, le nombre de jours : j , le nomnbre de marches :m . Ecrire une fonction(r,e,j,m) qui calcule la hautueur parcourue en une semaine.

#include <stdio.h>
#include <stdlib.h>

int hauteurParcourue(int r, int e, int j, int m)
{
    int hauteur;

    hauteur = r * e * m * 16 * j;

    return hauteur;
}

int main(void)
{
    int r, e, j, m, hauteur;

    printf("Saisir le nombre de rondes : ");
    scanf("%d", &r);
    printf("Saisir le nombre d'etages : ");
    scanf("%d", &e);
    printf("Saisir le nombre de jours : ");
    scanf("%d", &j);
    printf("Saisir le nombre de marches : ");
    scanf("%d", &m);

    hauteur = hauteurParcourue(r, e, j, m);

    printf("La hauteur parcourue en une semaine est de : %dm\n", hauteur);

    return 0;
}

