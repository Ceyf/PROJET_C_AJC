#include "main_header.h"


void initialisation_joueur(Ressources_Joueur *rjoueur)
{
    rjoueur->nb_villageois = 10;
    rjoueur->villageois_disponibles = 10;
    rjoueur->or_joueur = 1000;
    rjoueur->bois = 200;
    rjoueur->mat_noire = 100;
    rjoueur->batiments_construits = (Batiment*)malloc(sizeof(Batiment)*150);
    rjoueur->batiments_construits[0].niveau = 1;
    rjoueur->batiments_construits[0].nom = "Hôtel de ville";
    rjoueur->productionBois = 0;
    rjoueur->productionOr = 0;
    rjoueur->productionMatNoire = 0;
    rjoueur->production_villageois = 0;
    rjoueur->nb_batiments = 1;
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

void afficher_batiments(Ressources_Joueur *rjoueur){
    int nb_batiment[4] = {0, 0, 0, 0};
    nb_types_batiment(rjoueur, nb_batiment);
    printf("1 Hotel de ville de niveau %d\n", rjoueur->batiments_construits[0].niveau);

    if(nb_batiment[0] == 1)
        printf("1 Mine\n");
    else if(nb_batiment[0] > 1)
        printf("%d Mines\n", nb_batiment[0]);
    
    if(nb_batiment[1] == 1)
        printf("1 Scierie\n");
    else if(nb_batiment[1] > 1)
        printf("%d Scieries\n", nb_batiment[1]);

    if(nb_batiment[2] == 1)
        printf("1 Raffinerie\n");
    else if(nb_batiment[2] > 1)
        printf("%d Raffineries\n", nb_batiment[2]);

    if(nb_batiment[3] == 1)
        printf("1 Caserne\n");
    else if(nb_batiment[3] > 1)
        printf("%d Casernes\n", nb_batiment[3]);
}

void collecter_ressources(Ressources_Joueur *rjoueur){
    rjoueur->or_joueur += rjoueur->productionOr;
    rjoueur->bois += rjoueur->productionBois;
    rjoueur->mat_noire += rjoueur->productionMatNoire;
    rjoueur->nb_villageois += rjoueur->production_villageois;
    rjoueur->villageois_disponibles += rjoueur->production_villageois;
}

// Menu du joueur
void menu(Ressources_Joueur *rjoueur){

    // Initialisation des variables
    int menu = 0;
    int tour = 1;

    // Menu 
    while(menu != 4)
    {
        printf("Tour %d\nVotre village a %d Or, %d Bois, %d Matière noire et %d villageois prêts à travailler\n\nBatiments construits:\n"
        , tour, rjoueur->or_joueur, rjoueur->bois, rjoueur->mat_noire, 
        rjoueur->villageois_disponibles);

        // Affichage de la liste des batiments du joueur
        afficher_batiments(rjoueur);
        printf("\n");

        // Actions 
        printf("1- Construire un batiment\n2- Assigner des villageois aux batiments\n3- Finir le tour\n4- Quitter le jeu\n");
        scanf("%d", &menu);
    
        // Suivant le choix, le switch execute une action
        switch(menu)
        {
            case 1: printf("A completer 1\n");
                break;
            case 2: printf("A completer 2\n");
                break;
            case 3: printf("Vous terminez votre tour, vous collectez les ressources disponibles des batiments\n");
                    printf("\n");
                    collecter_ressources(rjoueur);
                    tour++;
                break;
            // Fin du jeu
            case 4:  printf("\n\n\n\n\n------------------------------------\n\tMerci d'avoir joué!\n------------------------------------\n\n\n\n\n");
                break;
            // En cas d'erreur
            default:  printf("Erreur de saisie, veuillez recommencer \n");
                break;
        }
    }
}
