#include "main_header.h"



void assigner_villageois(Ressources_Joueur* joueur)
{
    int choix_batiment;
    int nb_batiment[4];
    int nb_batiment_inactif[4];
    nb_types_batiment(joueur,nb_batiment);
    nb_types_batiment_inactif(joueur,nb_batiment);

    printf("\nVous avez actuellement %d villageois de disponible",joueur->villageois_disponibles);
    printf("\nVous avez actuellement %d batiment.\n",joueur->nb_batiments);
    printf("Voici la liste complete : \n*Nombre de Mine : %d\n*Nombre de Scierie : \n*Nombre de Raffinerie : \n*Nombre de Caserne : ",nb_batiment_inactif[0]);
    printf("Choisissez un Batiment à rendre actif\n*Scierie : (1)\nMine : (2)\n*Raffinerie : (3)\n*Caserne : (4)");
    scanf("%d",&choix_batiment);
    if(choix_batiment == 1 && joueur->villageois_disponibles >=2)
    printf("test");


}

void nb_types_batiment(Ressources_Joueur* rjoueur, int* nb_batiments){
    for(int i = 0;i < rjoueur->nb_batiments; i++){
        if(!strcmp(rjoueur->batiments_construits[i].nom, "Mine"))
            nb_batiments[0]++;
        if(!strcmp(rjoueur->batiments_construits[i].nom, "Scierie"))
            nb_batiments[1]++;
        if(!strcmp(rjoueur->batiments_construits[i].nom, "Raffinerie"))
            nb_batiments[2]++;
        if(!strcmp(rjoueur->batiments_construits[i].nom, "Caserne"))
            nb_batiments[3]++;
    }
}

void nb_types_batiment_inactif(Ressources_Joueur* rjoueur, int* nb_batiments){
    for(int i = 0;i < rjoueur->nb_batiments; i++){
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

