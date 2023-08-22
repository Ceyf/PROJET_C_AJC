#include "main_header.h"


void initialisation_joueur(Ressources_Joueur *rjoueur)
{
    rjoueur->nb_villageois = 10;
    rjoueur->villageois_disponibles = 10;
    rjoueur->or_joueur = 1000;
    rjoueur->bois = 200;
    rjoueur->mat_noire = 100;
    rjoueur->batiments_construits = (Batiment*)malloc(sizeof(Batiment));
    rjoueur->batiments_construits[0].niveau = 1;
    rjoueur->batiments_construits[0].nom = "Hôtel de ville";
    rjoueur->productionBois = 0;
    rjoueur->productionOr = 0;
    rjoueur->productionMatNoire = 0;
    rjoueur->nb_batiments = 1;
}

void init_templates_batiments(Batiment* templates_batiments){
    templates_batiments[0].nom = "Scierie";
    templates_batiments[0].cout_or = 50;
    templates_batiments[0].villageois_necessaires = 2;
    templates_batiments[0].production_bois = 20;

    templates_batiments[1].nom = "Mine";
    templates_batiments[1].cout_or = 100;
    templates_batiments[1].cout_bois = 20;
    templates_batiments[1].villageois_necessaires = 3;
    templates_batiments[1].production_or = 50;

    templates_batiments[2].nom = "Raffinerie";
    templates_batiments[2].cout_or = 500;
    templates_batiments[2].cout_bois = 100;
    templates_batiments[2].cout_mat_noire = 50;
    templates_batiments[2].villageois_necessaires = 5;
    templates_batiments[2].production_mat_noire = 10;

    templates_batiments[3].nom = "Caserne";
    templates_batiments[3].cout_or = 200;
    templates_batiments[3].cout_bois = 50;
    templates_batiments[3].villageois_necessaires = 4;
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

void menu(Ressources_Joueur *rjoueur){
    int menu = 0;

    do
    {
        printf("Votre village a %d Or, %d Bois, %d Matière noire et %d villageois prêts à travailler\n\nBatiments construits:\n"
        , rjoueur->or_joueur, rjoueur->bois, rjoueur->mat_noire, 
        rjoueur->villageois_disponibles);
        afficher_batiments(rjoueur);
        printf("1- Construire un bâtiment\n5- Quitter le jeu\n");
        scanf("%d", &menu);
    } while(menu != 5);
    printf("\n\n\n\n\n------------------------------------\n\tMerci d'avoir joué!\n------------------------------------\n\n\n\n\n");
}