#include "main_header.h"


void construction(int bat, Ressources_Joueur *joueur)
{
    switch(bat)
    {
        case 1: if(joueur->or_joueur >= 50)
                {
                    joueur->batiments_construits[joueur->nb_batiments].nom = "Scierie";
                    joueur->nb_batiments++;
                    joueur->or_joueur -= 50;
                    joueur->batiments_construits[joueur->nb_batiments].active = false;
                }
                else
                    printf("Vous n'avez pas les ressources necessaires");
            break;
        case 2: if(joueur->or_joueur >= 100 && joueur->bois >= 20)
                {
                    joueur->batiments_construits[joueur->nb_batiments].nom = "Mine";
                    joueur->nb_batiments++;
                    joueur->or_joueur -= 100;
                    joueur->bois -= 20;
                    joueur->batiments_construits[joueur->nb_batiments].active = false;
                }
                else
                    printf("Vous n'avez pas les ressources necessaires");
            break;
        case 3: if(joueur->or_joueur >= 500 && joueur->bois >= 100 && joueur->mat_noire >= 50)
                {
                    joueur->batiments_construits[joueur->nb_batiments].nom = "Raffinerie";
                    joueur->nb_batiments++;
                    joueur->or_joueur -= 500;
                    joueur->bois -= 100;
                    joueur->mat_noire -= 50;
                    joueur->batiments_construits[joueur->nb_batiments].active = false;
                }
                else
                    printf("Vous n'avez pas les ressources necessaires");
            break;
        case 4: if(joueur->or_joueur >= 200 && joueur->bois >= 50)
                {
                    joueur->batiments_construits[joueur->nb_batiments].nom = "Caserne";
                    joueur->nb_batiments++;
                    joueur->bois -= 50;
                    joueur->or_joueur -= 200;
                    joueur->batiments_construits[joueur->nb_batiments].active = false;
                }
                else
                    printf("Vous n'avez pas les ressources necessaires");
            break;
    }
}