#include "main_header.h"

int main(int argc, char** argv){
    Ressources_Joueur joueur;
    Batiment templates_batiments[4];
    init_templates_batiments(templates_batiments);
    initialisation_joueur(&joueur);
    
    joueur.bois += 2000;
    joueur.or_joueur += 2000;
    joueur.mat_noire += 2000;
    ameliorer_hdv(&joueur);
    ameliorer_hdv(&joueur);
    ameliorer_hdv(&joueur);
    ameliorer_hdv(&joueur);

    menu(&joueur);
    free(joueur.batiments_construits);
    return 0;
}