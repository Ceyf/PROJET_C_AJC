#ifndef STRUCT_HEADER_H
#define STRUCT_HEADER_H
//STRUCTURES

typedef struct Batiment
{
    int niveau;
    int cout_or;
    int cout_bois;
    int cout_mat_noire;
    int villageois_necessaires;
}Batiment;

typedef struct Ressources_Joueur
{
    int nb_villageois;
    int villageois_disponibles;
    Batiment *batiments_construits;
    int or_joueur;
    int bois;
    int mat_noire;
    
}Ressources_Joueur;

#endif