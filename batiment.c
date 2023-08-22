#include "main_header.h"

//Fonction qui permet de déterminer quel nombre de chaque type de bâtiments
//le joueur possède
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

//Fonction qui affiche les bâtiments possédés par le joueur
void afficher_batiments(Ressources_Joueur *rjoueur){
    int nb_batiment[4] = {0, 0, 0, 0};
    nb_types_batiment(rjoueur, nb_batiment);
    printf("1 Hotel de ville de niveau %d\n", rjoueur->batiments_construits[0].niveau);

    //Affichage des mines
    if(nb_batiment[0] == 1)
        printf("1 Mine\n");
    else if(nb_batiment[0] > 1)
        printf("%d Mines\n", nb_batiment[0]);
    
    //Affichage des scieries
    if(nb_batiment[1] == 1)
        printf("1 Scierie\n");
    else if(nb_batiment[1] > 1)
        printf("%d Scieries\n", nb_batiment[1]);

    //Affichage des raffineries
    if(nb_batiment[2] == 1)
        printf("1 Raffinerie\n");
    else if(nb_batiment[2] > 1)
        printf("%d Raffineries\n", nb_batiment[2]);

    //Affichage des casernes
    if(nb_batiment[3] == 1)
        printf("1 Caserne\n");
    else if(nb_batiment[3] > 1)
        printf("%d Casernes\n", nb_batiment[3]);
}

//Fonction qui collecte les ressources selon l'output des bâtiments possédés
//par le joueur quand il passe le tour
void collecter_ressources(Ressources_Joueur *rjoueur){
    rjoueur->or_joueur += rjoueur->productionOr;
    rjoueur->bois += rjoueur->productionBois;
    rjoueur->mat_noire += rjoueur->productionMatNoire;
    rjoueur->nb_villageois += rjoueur->production_villageois;
    rjoueur->villageois_disponibles += rjoueur->production_villageois;
}
