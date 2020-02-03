#include <stdio.h>
#include <stdlib.h>
#include "function/function.h"
#include "function/partie1.h"
#include "function/partie2.h"

int main(int argc, char *argv[])
{
    int valeurIntegerMax = 100 ;
    char nom[valeurIntegerMax];

    char prenom[valeurIntegerMax];



    //printf("Quel est votre nom ? ");
    //fgets(nom, 10, stdin);




    printf("Quel est votre nom ? ");
    fgets(nom, 10, stdin);
    printf("Quel est votre prenom ? ");
    fgets(prenom, 10, stdin);

        int ifinal = 0;
       for(int i = 0; i<valeurIntegerMax ; i++)
    {

        if(nom[i]==10)
        {
            ifinal = i;
            i = valeurIntegerMax ;
        }
        else
        {

        }
    }

    char nomFinal[ifinal];
    for(int i = 0; i<ifinal ; i++)
    {

        if(nom[i]==10)
        {
            ifinal = i;
            i = valeurIntegerMax ;
        }
        else
        {
            nomFinal[i]=nom[i] ;
        }
    }





       for(int i = 0; i<valeurIntegerMax ; i++)
    {

        if(prenom[i]==10)
        {
            ifinal = i;
            i = valeurIntegerMax ;
        }
        else
        {

        }
    }

        char prenomFinal[ifinal];
    for(int i = 0; i<ifinal ; i++)
    {

        if(nom[i]==10)
        {
            ifinal = i;
            i = valeurIntegerMax ;
        }
        else
        {
            prenomFinal[i]=prenom[i] ;
        }
    }

    printf("\n %s \n %s",prenomFinal,nomFinal);

    // PArtie recuperation du prenom





    //printf("Bonjour %s %s",prenom,nom);

















/*    for(int i = 0; i<valeurIntegerMax ; i++)
    {
        printf("\n %c",nom[i]) ;
        if(nom[i]==10)
        {
            i = valeurIntegerMax ;
            printf("\n %d",i) ;
        }
        else
        {

        }
    }
*/
    return 0;
}
