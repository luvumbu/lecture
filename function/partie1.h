int partie1(int valeur)
{    // cette partie elle envoie la quantite seulement du contenue partie1
    FILE* fichier = NULL;
    int caractereActuel = 0; // permet dencrementaire une valeur
    int ncaractere = 0;
    fichier = fopen("html/partie1.html", "r");
    if (fichier != NULL)
    {  // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
           // printf("-%c", caractereActuel); // On l'affiche
            ncaractere ++ ;
        }
        while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
        fclose(fichier);
    }
    //printf("%d",ncaractere);
    valeur = ncaractere;
    return valeur ;
}
void setpartie1(char *tableau)
{
        FILE* fichier = NULL;
    int caractereActuel = 0; // permet dencrementaire une valeur
    int ncaractere = 0;
    fichier = fopen("html/partie1.html", "r");
    if (fichier != NULL)
    {  // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            //printf("-%c", caractereActuel); // On l'affiche

             tableau[ncaractere] = caractereActuel ;
             ncaractere ++ ;
        }
        while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
        fclose(fichier);
    }
}
