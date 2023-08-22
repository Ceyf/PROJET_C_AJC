#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H


//LIBRAIRIES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "struct_header.h"


//PROTOTYPES
void initialisation_joueur(Ressources_Joueur *rjoueur);
void init_templates_batiments(Batiment* templates_batiments);
void assigner_villageois(Ressources_Joueur* joueur);
void menu(Ressources_Joueur *rjoueur);
void afficher_batiments(Ressources_Joueur *rjoueur);
void nb_types_batiment(Ressources_Joueur* rjoueur, int* nb_batiment);
void nb_types_batiment_inactif(Ressources_Joueur* rjoueur, int* nb_batiments);
int construction(int bat, Ressources_Joueur *joueur);
void menu(Ressources_Joueur *rjoueur);
void collecter_ressources(Ressources_Joueur *rjoueur);

#endif