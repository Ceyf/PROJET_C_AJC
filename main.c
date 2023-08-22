#include "main_header.h"

int main(int argc, char** argv){
    Ressources_Joueur joueur;
    Batiment templates_batiments[4];
    init_templates_batiments(templates_batiments);
    initialisation_joueur(&joueur);
    //printf("%d", joueur.or_joueur);
    //assigner_villageois(joueur,batiment);

    //printf("%d\n", joueur.or_joueur);

    //printf("Joueur : %d\n", joueur.productionBois);
    //assigner_villageois(&joueur);
    
    //construction(3, &joueur);

    //printf("Joueur : %d\n", joueur.or_joueur);

    menu(&joueur);
    free(joueur.batiments_construits);
    return 0;
}