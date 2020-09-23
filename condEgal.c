#include <stdio.h>


int Egalite(int solde_joueur1, int solde_joueur2, int dice){

    if (solde_joueur1 == solde_joueur2) { // Si le solde du joueur 1 est égal au solde du joueur 2

    printf("Solde joueur 1 egal solde joueur 2, soustraction de la valeur du DE pour le joueur 2. ");
    solde_joueur2 = solde_joueur2 - dice;
    printf("Nouveau solde : %d\n\n", solde_joueur2);

    }

}
