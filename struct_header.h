#ifndef STRUCT_HEADER_H
#define STRUCT_HEADER_H
//STRUCTURES

typedef struct Batiment
{
    char* nom;
    int niveau;
    int cout_or;
    int cout_bois;
    int cout_mat_noire;
    int villageois_necessaires;
    int villageois_assignes;
    int production_or;
    int production_bois;
    int production_mat_noire;
    int active;
}Batiment;

typedef struct Ressources_Joueur
{
    int nb_villageois;
    int villageois_disponibles;
    Batiment *batiments_construits;
    int nb_batiments;
    int or_joueur;
    int bois;
    int mat_noire;
    int productionBois;
    int productionOr;
    int productionMatNoire;
    
}Ressources_Joueur;

#endif