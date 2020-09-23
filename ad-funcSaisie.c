#include <stdio.h>
#include <stdlib.h>

int getPlayerValue()
{
	int objectifA = 0;
	int objectifB = 0;

	do {
		printf("Joueur A, veuillez rentrer une valeur entre 50 et 100\n");
		scanf_s("%d", &objectifA);
		if (objectifA < 50 || objectifA > 100)
			printf("Erreur\n");

	} while (objectifA < 50 || objectifA > 100);

	do {
		printf("Joueur B, veuillez rentrer une valeur entre 50 et 100\n");
		scanf_s("%d", &objectifB);
		if (objectifB < 50 || objectifB > 100)
			printf("Erreur\n");

	} while (objectifB < 50 || objectifB > 100);

	return 0;

}
