#include "main_header.h"

int main(int argc, char** argv){

    Ressources_Joueur joueur;
    initialisation_joueur(&joueur);

    printf("bois : %d\n",joueur.bois);
    printf("Batiment joueur : %s\n",joueur.batiments_construits->nom);

    free(joueur.batiments_construits);
    return 0;
}