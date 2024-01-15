// Ecrire un generateur de phrases aleatoires en utulisant la focntion rand(). On dispose de 3 tableaux : le sujet, les verbes et les complements. Le programme choisit aleatoirement un element dans chaque tableau et affiche 10 phrases completes.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char *sujet[] = {"Albert","Paul","Emile","Jean","Etienne"};
    char *verbe[] = {"mange","cuit","jette","achete","vole"};
    char *complement[] = {"des huitres","du pain","des pates","des gateaux","des fruits"};

    int i,j,k;

    srand(time(NULL));

    for (i = 0 ; i < 10 ; i++)
    {
        j = rand() % 5;
        k = rand() % 5;
        printf("%s %s %s\n", sujet[j], verbe[k], complement[k]);
    }

    return 0;

}
