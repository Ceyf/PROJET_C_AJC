#include "main_header.h"



void assigner_villageois(Ressources_Joueur* joueur)
{
    while(1){
    int choix_batiment;
    int nb_batiment_inactif[4]={0,0,0,0};
    nb_types_batiment_inactif(joueur,nb_batiment_inactif);
    for(int i=0;i<4;i++)
        printf("\n--%d",nb_batiment_inactif[i]);
    printf("\nVous avez actuellement %d villageois de disponible",joueur->villageois_disponibles);
    printf("\nVous avez actuellement %d batiment.\n",joueur->nb_batiments);
    printf("Voici la liste complete : \n*Nombre de Mine : %d\n*Nombre de Scierie : %d\n*Nombre de Raffinerie : %d\n*Nombre de Caserne : %d",nb_batiment_inactif[0],nb_batiment_inactif[1],nb_batiment_inactif[2],nb_batiment_inactif[3]);
    printf("Choisissez un Batiment à rendre actif\n*Scierie : (1)\nMine : (2)\n*Raffinerie : (3)\n*Caserne : (4)\n");
    scanf("%d",&choix_batiment);
    if(choix_batiment == 1 && joueur->villageois_disponibles >=2 && nb_batiment_inactif[0] >=1)
    {
        joueur->villageois_disponibles = joueur->villageois_disponibles-2;
        joueur->productionBois = joueur->productionBois +20;
    }

    if(choix_batiment == 2 && joueur->villageois_disponibles >=3 && nb_batiment_inactif[1] >=1)
    {
        joueur->villageois_disponibles = joueur->villageois_disponibles-4;
        joueur->productionOr = joueur->productionOr +50;
    }

    if(choix_batiment == 3 && joueur->villageois_disponibles >=5 && nb_batiment_inactif[2] >=1)
    {
        joueur->villageois_disponibles = joueur->villageois_disponibles-5;
        joueur->productionMatNoire = joueur->productionMatNoire +10;
    }

    if(choix_batiment == 4 && joueur->villageois_disponibles >=4 && nb_batiment_inactif[3] >=1)
    {
        joueur->villageois_disponibles = joueur->villageois_disponibles-4;
    }}
}



void nb_types_batiment_inactif(Ressources_Joueur* rjoueur, int* nb_batiments){

    for(int i = 0;i < rjoueur->nb_batiments-1; i++){
        if(!strcmp(rjoueur->batiments_construits[i].nom, "Mine") && !rjoueur->batiments_construits->active)
            nb_batiments[0]++;
            
        if(!strcmp(rjoueur->batiments_construits[i].nom, "Scierie") && !rjoueur->batiments_construits->active)
            nb_batiments[1]++;
            
        if(!strcmp(rjoueur->batiments_construits[i].nom, "Raffinerie") && !rjoueur->batiments_construits->active)
            nb_batiments[2]++;
            
        if(!strcmp(rjoueur->batiments_construits[i].nom, "Caserne") && !rjoueur->batiments_construits->active)
            nb_batiments[3]++;
            
    }

}

