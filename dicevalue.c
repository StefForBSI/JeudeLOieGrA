int diceValue() {
	int aleatoire;                      //On cree une variable aléatoire
	srand((int)time(NULL));             //On initialise la fonction srand lie à rand() et on la base sur le temps grace a notre #include <temp.h>, permettant la generation d'un nombre completement aleatoire
	aleatoire = 1 + rand() % 6;         //La fonction Rand va choisir des chiffres aleatoirement auquel on va faire un %6, permettant dobtenir des chiffre entre 0 et 5 qu on additionne à 1 pour passer le resultat entre 1 et 6  
	return aleatoire;					//On retourne le chiffre aleatoire
}