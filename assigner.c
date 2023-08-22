#include "main_header.h"



void assigner_villageois(Ressources_Joueur* joueur,Batiment *batiment)
{
    int choix_batiment;
    printf("Bonjour,\nVous avez actuellement %d villageois de disponible",joueur->villageois_disponibles);
    printf("Bonjour,\nVous avez actuellement %d batiment.\n",joueur->nb_batiments);
    printf("Voici la liste complete : \n*Nombre de Scierie : %d\n*Nombre de Mine : %d\n*Nombre de Raffinerie : %d\n*Nombre de Caserne : %d",);
    printf("Choisissez un Batiment à rendre actif\n*Scierie : (1)\nMine : (2)\n*Raffinerie : (3)\n*Caserne : (4)");
    scanf("%d",&choix_batiment);
    if(choix_batiment == 1 && joueur->villageois_disponibles >=2)
    
    templates_batiments[0].cout_or = 50;
    templates_batiments[0].villageois_necessaires = 2;

}