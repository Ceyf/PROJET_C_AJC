#include "main_header.h"

void afficher_prix_amelioration_hdv(Ressources_Joueur *rjoueur){
    if(rjoueur->batiments_construits[0].niveau == 1)
        printf("Cout: 250 Or, 100 Bois, 50 Matiere noire\n");
    else if(rjoueur->batiments_construits[0].niveau == 2)
        printf("Cout: 500 Or, 200 Bois, 100 Matiere noire\n");
    else if(rjoueur->batiments_construits[0].niveau == 3)
        printf("Cout: 1000 Or, 400 Bois, 200 Matiere noire\n");
    else
        printf("Votre Hotel de ville est au niveau maximum!\n");
}

void ameliorer_hdv(Ressources_Joueur *rjoueur){
    afficher_prix_amelioration_hdv(rjoueur);
    if(rjoueur->batiments_construits[0].niveau == 4)
        return;

    if(rjoueur->batiments_construits[0].niveau == 1){
        if(rjoueur->or_joueur >= 250 && rjoueur->bois >= 100 && rjoueur->mat_noire >= 50){
            rjoueur->batiments_construits[0].niveau++;
            rjoueur->production_villageois++;
            rjoueur->or_joueur -= 250;
            rjoueur->bois -= 100;
            rjoueur->mat_noire -= 50;
        }else
            printf("Vous n'avez pas les ressources necessaires pour acceder au niveau 2\n");
    }else if(rjoueur->batiments_construits[0].niveau == 2){
        if(rjoueur->or_joueur >= 500 && rjoueur->bois >= 200 && rjoueur->mat_noire >= 100){
            rjoueur->batiments_construits[0].niveau++;
            rjoueur->production_villageois++;
            rjoueur->or_joueur -= 500;
            rjoueur->bois -= 200;
            rjoueur->mat_noire -= 100;
        }else
            printf("Vous n'avez pas les ressources necessaires pour acceder au niveau 3\n");
    }else if(rjoueur->batiments_construits[0].niveau == 3){
        if(rjoueur->or_joueur >= 1000 && rjoueur->bois >= 400 && rjoueur->mat_noire >= 200){
            rjoueur->batiments_construits[0].niveau++;
            rjoueur->production_villageois++;
            rjoueur->or_joueur -= 1000;
            rjoueur->bois -= 400;
            rjoueur->mat_noire -= 200;
        }else
            printf("Vous n'avez pas les ressources necessaires pour acceder au niveau 4\n");
    }
}