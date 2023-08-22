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
    rjoueur->productionBois = 0;
    rjoueur->productionOr = 0;
    rjoueur->productionMatNoire = 0;
    rjoueur->nb_batiments = 1;
}

void init_templates_batiments(Batiment* templates_batiments){
    templates_batiments[0].nom = "Scierie";
    templates_batiments[0].cout_or = 50;
    templates_batiments[0].villageois_necessaires = 2;
    templates_batiments[0].production_bois = 20;

    templates_batiments[1].nom = "Mine";
    templates_batiments[1].cout_or = 100;
    templates_batiments[1].cout_bois = 20;
    templates_batiments[1].villageois_necessaires = 3;
    templates_batiments[1].production_or = 50;

    templates_batiments[2].nom = "Raffinerie";
    templates_batiments[2].cout_or = 500;
    templates_batiments[2].cout_bois = 100;
    templates_batiments[2].cout_mat_noire = 50;
    templates_batiments[2].villageois_necessaires = 5;
    templates_batiments[2].production_mat_noire = 10;

    templates_batiments[3].nom = "Caserne";
    templates_batiments[3].cout_or = 200;
    templates_batiments[3].cout_bois = 50;
    templates_batiments[3].villageois_necessaires = 4;
}