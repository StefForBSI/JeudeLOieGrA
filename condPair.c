//input:
//  solde : Le score du joueur que l'on souhaite verifier 
//  dice : Valeur du de sur ce tour
//output:
//  NouveauScore : Valeur du nouveau score qu'il faudra appliquer au joueur
int int condPair (int solde, int dice){
    //generation d'un score temporaire:
    int NouveauScore;
    if(solde%2 == 0){ //Si le score est pair
        NouveauScore = solde+dice; //Score + valeur du de
    }else{
        NouveauScore = solde; //pas de changement du score
    }
    return NouveauScore //renvoi du nouveau score
}