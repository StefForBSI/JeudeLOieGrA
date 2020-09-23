#include <stdio.h>
#include <stdlib.h>

int condEleven(int solde)
{
	
	if (solde % 11 == 0)
	{
		printf ("Votre solde est un multiple de 11\n");
		solde = solde*2;
	}

	return solde;

}
