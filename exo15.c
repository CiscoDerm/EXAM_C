// Realsier un programme trie une liste saisie au clavier. La saisie est ininterrompue jusqu'a la saisie de la lettre q. Vous n'utiliserez pas de methodes intégres pour realiser le porgramme (sort). Vous utiliserez l'algorithme du tri a bulle.
// Apres saisie, il y'a affichage de la liste trié : 
// Entrez une note : 12 
// Entrez une note : 15
// Entrez une note : 11
// Entrez une note : 9
// Entrez une note : q
// Liste triée : 9 11 12 15

#include <stdio.h>
#include <stdlib.h>

void tri(int *tab, int taille)
{
    int i, j, tmp;

    for (i = 0 ; i < taille ; i++)
    {
        for (j = 0 ; j < taille - 1 ; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    return;
}

int main(void)
{
    int tab[100], i = 0, j;

    while (1)
    {
        printf("Entrez une note : ");
        scanf("%d", &tab[i]);
        if (tab[i] == 'q')
            break;
        i++;
    }

    tri(tab, i);

    printf("Liste triee : ");
    for (j = 0 ; j < i ; j++)
        printf("%d ", tab[j]);
    printf("\n");

    return 0;
}


