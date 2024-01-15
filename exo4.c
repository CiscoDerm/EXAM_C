// Ecrire un programme qui possede une fonction inverse(chaine) qui inverse une chaine et affiche le resultat.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverse(char *chaine)
{
    int i, j;
    char tmp;

    for (i =0, j = strlen(chaine)-1 ; i < j ; i++, j--)
    {
        tmp = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = tmp;
    }

    printf("%s\n", chaine);

    return;
}

int main(void)
{
    char chaine[100];

    printf("Saisir une chaine de caracteres : ");
    scanf("%s", chaine);

    inverse(chaine);

    return 0;
}
