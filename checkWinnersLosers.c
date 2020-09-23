#include <stdio.h>


void checkWinnersLosers(soldeA, soldeB, objA, objB) {

	

	if (soldeA == objA) {

		printf("Felicitation, joueur A gagne");

	}

	if (soldeB == objB) {
		
		printf("Felicitation, joueur B gagne");
	}

	if (soldeA > objA) {
		printf("Joueur B gagne car joueur A a depasse son objectif");
	}

	if (soldeB > objB) {
		printf("Joueur A gagne car joueur B a depasse son objectif");
	}



}
