#include "main_header.h"

int main(int argc, char** argv){

    Ressources_Joueur joueur;
    Batiment templates_batiments[4];
    
    init_templates_batiments(templates_batiments);
    initialisation_joueur(&joueur);

    printf("%d", joueur.or_joueur);

    construction('Scierie', &joueur);
    construction('Scierie', &joueur);
    construction('Scierie', &joueur);

    printf("Joueur : %d\n", joueur.productionBois);

    
   // menu(&joueur);

    free(joueur.batiments_construits);
    return 0;
}