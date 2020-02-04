#include <stdio.h>
#include <stdlib.h>
#include "function/function.h"
#include "function/partie1.h"
#include "function/partie2.h"

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int valeurIntegerMax = 100 ;
    char nom[valeurIntegerMax];
    char nomfinal[valeurIntegerMax];

    printf("Quel est votre nom ? ");
    fgets(nom, valeurIntegerMax, stdin);


    char nomBienvenue[valeurIntegerMax] ;
    strcpy(nomBienvenue, nom); // On copie "chaine" dans "copie"



    int  i = 0 ;
    int iz = 0 ;
    for(  i = 0; i<valeurIntegerMax;i++)
    {
        if((int)nom[i]==10)
            {

                    iz = i ;

                 nom[i] = '.';
                 nom[i+1] = 't';
                 nom[i+2] = 'x';
                 nom[i+3] = 't';


                // printf("\n%s",nom) ;
            }
        else
        {

        }
    }



      char nomf[1000];

      nomf[0] = 'u';
      nomf[1] = 's';
      nomf[2] = 'e';
      nomf[3] = 'r';
      nomf[4] = '/';



        for(i= 0;i<valeurIntegerMax ;i++)
        {
            nomf[i+5] = nom[i];
        }
  /*      fichier = fopen(nomf, "w");

    if (fichier != NULL)
    {
        fputs("Salut les Zér0s\nComment allez-vous ?", fichier);
        fclose(fichier);
    }
 */

     fichier = fopen(nomf, "r+");

    if (fichier != NULL)
    {

    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Bienvenue a toi %s \n \n",nomBienvenue);
        fichier = fopen(nomf, "w");
        if (fichier != NULL)
        {
            fputs("Salut les Zér0s\nComment allez-vous ?", fichier);
            fclose(fichier);
        }
    }
     printf("\n--Menu principal --\n") ;
     printf("\n --  Creation de site web facile  -- \n") ;



    return 0;
}
