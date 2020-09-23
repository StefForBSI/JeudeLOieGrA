#include "condFive.h"

int condFive(int solde, int dice) {
	
	if (solde % 5 == 0) { 
		solde -= dice;
	}
	return solde;
}