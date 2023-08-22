#include "main_header.h"


void construction(char * bat, Ressources_Joueur *joueur)
{
    //printf("constr : %d\n", joueur->or_joueur);
    if(bat == 'Scierie')
    {
        if(joueur->or_joueur >= 50)
        {
            joueur->nb_batiments++;
            joueur->batiments_construits = (Batiment*)realloc(joueur->batiments_construits, sizeof(Batiment) * joueur->nb_batiments);
            joueur->productionBois += 20;
            joueur->or_joueur -= 50;
            //joueur->villageois_disponibles -= 2;
        }

    }

}