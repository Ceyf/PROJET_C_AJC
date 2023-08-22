#include "main_header.h"

int main(int argc, char** argv){
    Ressources_Joueur joueur;
    Batiment templates_batiments[4];
    init_templates_batiments(templates_batiments);
    initialisation_joueur(&joueur);
    

    menu(&joueur);
    free(joueur.batiments_construits);
    return 0;
}