#include "main_header.h"


int construction(int bat, Ressources_Joueur *joueur)
{
    //printf("constr : %d\n", joueur->or_joueur);
    switch(bat)
    {
        case 1: if(joueur->or_joueur >= 50)
                {
                    joueur->nb_batiments++;
                    joueur->batiments_construits = (Batiment*)realloc(joueur->batiments_construits, sizeof(Batiment) * joueur->nb_batiments);
                    joueur->productionBois += 20;
                    joueur->or_joueur -= 50;
                }
                else
                    printf("Vous n'avez pas les ressources necessaires");
            break;
        case 2: if(joueur->or_joueur >= 100 && joueur->bois >= 20)
                {
                    joueur->nb_batiments++;
                    joueur->batiments_construits = (Batiment*)realloc(joueur->batiments_construits, sizeof(Batiment) * joueur->nb_batiments);
                    joueur->productionOr += 50;
                    joueur->or_joueur -= 100;
                    joueur->bois -= 20;
                }
                else
                    printf("Vous n'avez pas les ressources necessaires");
            break;
        case 3: if(joueur->or_joueur >= 500 && joueur->bois >= 100 && joueur->mat_noire >= 50)
                {
                    joueur->nb_batiments++;
                    joueur->batiments_construits = (Batiment*)realloc(joueur->batiments_construits, sizeof(Batiment) * joueur->nb_batiments);
                    joueur->productionMatNoire += 10;
                    joueur->or_joueur -= 500;
                    joueur->bois -= 100;
                    joueur->mat_noire -= 50;
                }
                else
                    printf("Vous n'avez pas les ressources necessaires");
            break;
        case 4: if(joueur->or_joueur >= 200 && joueur->bois >= 50)
                {
                    joueur->nb_batiments++;
                    joueur->batiments_construits = (Batiment*)realloc(joueur->batiments_construits, sizeof(Batiment) * joueur->nb_batiments);
                    joueur->bois -= 50;
                    joueur->or_joueur -= 200;
                }
                else
                    printf("Vous n'avez pas les ressources necessaires");
            break;
    }
    // if(bat == 'Scierie')
    // {
        
    // }
    // if(bat == 'Mine')
    // {
    // }
    // if(bat == 'Raffinerie')
    // {
        
    // }
    // if(strcmp("Caserne", bat))
    // {
       
    // }

}