#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H


//LIBRAIRIES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct_header.h"


//PROTOTYPES
void initialisation_joueur(Ressources_Joueur *rjoueur);
void init_templates_batiments(Batiment* templates_batiments);
void assigner_villageois(Ressources_Joueur* joueur,Batiment *batiment);
void construction(char *bat, Ressources_Joueur *joueur);
void menu(Ressources_Joueur *rjoueur);
void afficher_batiments(Ressources_Joueur *rjoueur);
void nb_types_batiment(Ressources_Joueur* rjoueur, int* nb_batiment);

#endif