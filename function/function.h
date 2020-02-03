/*char addfile()
{        FILE* fichier = NULL;

    int max = 1000000; // création de la variable a grande capacité
    char nom[max]; // création du tableau de chaine de caratcteres
    int caractereActuel = 0;
    int compteurvar = 0 ; // permet de compter le nombre de variables dans le fichier string
    char tableau[max]; // Crée de creer un nouveau tableau
    printf("Quel est votre nom ? ");
    fgets(nom, max, stdin);
  //  printf("Ah ! Vous vous appelez donc %s !\n\n", nom);

    fichier = fopen("test.txt", "w");

    if (fichier != NULL)
    {
        fputs(nom, fichier);
        fclose(fichier);
    }







    fichier = fopen("test.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {

            caractereActuel = fgetc(fichier); // On lit le caractère
         //   printf("%c", caractereActuel); // On l'affiche

            tableau[compteurvar] =  caractereActuel;
            compteurvar ++ ;


        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }

     int el = 0;

 // creation du dernier tableau

 char tablast[compteurvar];
  for(el =0; el<compteurvar; el++)
  {
   // printf("\n  %c",tableau[el]);
    tablast[el]=tableau[el] ;
   // printf("\n  %c",tablast[el]);
  }
}
*/
void bonjour()
{
    int boucleEntre ;
    int boucleEntre2 ;
    int valeurMaxEntre = 1000;

    char valeurEntre[valeurMaxEntre];
    int valeurProvisoire =0;
    int stockageNombres = 0 ;
    int stockageLettresMaj = 0 ;
    int stockageLettresMin = 0 ;
    int nombreTotal ;
    int stockageNombreSpaceVide = 0;
    printf("Quel est votre valeurEntre? ");
    fgets(valeurEntre, valeurMaxEntre, stdin);
    for(boucleEntre = 0 ;boucleEntre <valeurMaxEntre ; boucleEntre++)
    {
                if(valeurEntre[boucleEntre]!=10)
                {
                    valeurProvisoire  = (int)valeurEntre[boucleEntre];
                    if(valeurProvisoire>64 && valeurProvisoire<90 || valeurProvisoire==32 )
                    {
                        if(valeurProvisoire==32)
                        {
                           stockageNombreSpaceVide++;// table ascii pour letres Maj
                        }
                        ++stockageLettresMaj;
                    }
                    else if (valeurProvisoire>96 && valeurProvisoire<123)
                    {
                        ++stockageLettresMin; // table ascii pour letres minuscule
                    }
                    else if (valeurProvisoire>47 && valeurProvisoire<58)
                    {
                        ++stockageNombres; // table ascii pour le nombre de 0a 9
                    }
                }
                    else
                    {
                        nombreTotal = stockageLettresMaj+stockageLettresMin+stockageNombres;
                        boucleEntre =valeurMaxEntre ;
                    }
      }
        nombreTotal = (int)nombreTotal ;
        int valeurEntreFinal[nombreTotal];
        char test ;


      char non []="SELECT" ;
      for(int n = 0 ; n<nombreTotal ; n ++ )
      {
          valeurEntreFinal[n] = valeurEntre[n];


           test = (char)  valeurEntreFinal[n] ;


           // printf("%d \n",valeurEntreFinal[n]);
            if(non[n]==test)
            {
                printf("\n OK pour : n %d",n);
            }
            else
            {
                printf("\n Echec pour : n %d",n);
            }
      }


}



/*



    /*
    FILE* fichier = NULL;
    int a  = 0;// valeur de stockage
    int b =partie1(a); // quatinte des elemeents finaux
    int aa  = 0;// valeur de stockage
    int bb =partie1(aa); // quatinte des elemeents finaux
    char tableau1[b] ;// ajoute les valeur dans le tableau
    char tableau2[bb] ;// ajoute les valeur dans le tableau
    setpartie1(tableau1);
    setpartie2(tableau2);
   // printf("%s",tableau);

    for( int n = 0 ; n<b ;n++)
    {
        printf("%c",tableau1[n]);
    }
        for( int n = 0 ; n<b ;n++)
    {
        printf("%c",tableau2[n]);
    }
   // printf("%d",b); Donne le nombre des caracteres

   char monsite[] = "monsite.html";
    fichier = fopen(monsite, "a");
    if (fichier != NULL)
    {
        fputs(tableau1, fichier);
        fclose(fichier);
    }
        fichier = fopen(monsite, "a+");

    if (fichier != NULL)
    {
        fputs("<h1>JE suis juste un titre</h1>", fichier);
        fclose(fichier);
    }
            fichier = fopen(monsite, "a+");
    if (fichier != NULL)
    {
        fputs(tableau2, fichier);
        fclose(fichier);
    }
    */
