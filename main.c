#include "main_header.h"

int main(int argc, char** argv){

    Ressources_Joueur joueur;
    initiatilisation_joueur(&joueur);
    printf("bois : %d\n",joueur.bois);
    return 0;
}