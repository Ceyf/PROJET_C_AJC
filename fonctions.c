#include "main_header.h"


void initialisation_joueur(Ressources_Joueur *rjoueur)
{
    rjoueur->nb_villageois = 10;
    rjoueur->villageois_disponibles = 10;
    rjoueur->or_joueur = 1000;
    rjoueur->bois = 200;
    rjoueur->mat_noire = 100;
    rjoueur->batiments_construits = (Batiment*)malloc(sizeof(Batiment));
    rjoueur->batiments_construits[0].niveau = 1;
    rjoueur->batiments_construits[0].nom = "Hôtel de ville";
}