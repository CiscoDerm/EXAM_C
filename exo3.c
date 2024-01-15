// Ecrire un programme, qui donne la mesure de l'angle d'un triangle rectangle, dont on saisit le côté opposé et l'hypoténuse ainsi que la longueur du coté adjacent.
// 2 focntions angle et coteadj.

// Probleme de compilation avec la fonction asin, il faut ajouter -lm a la fin de la commande de compilation.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float angle(float opp, float hyp)
{
    float ang;

    ang = sin(opp / hyp);

    return ang;
}

float coteadj(float opp, float hyp)
{
    float adj;

    adj = sqrt(hyp * hyp - opp * opp);

    return adj;
}

int main(void)
{
    float opp, hyp, adj, ang;

    printf("Saisir la longueur de l'oppose : ");
    scanf("%f", &opp);
    printf("Saisir la longueur de l'hypotenuse : ");
    scanf("%f", &hyp);

    ang = angle(opp, hyp);
    adj = coteadj(opp, hyp);

    printf("Langle du triangle est de : %f\n", ang);
    printf("Le cote adjacent est de : %f\n", adj);

    return 0;
}