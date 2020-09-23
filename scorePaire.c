//input:
//  Score : Le score du joueur que l'on souhaite verifier 
//  ValD : Valeur du de sur ce tour
//output:
//  NouveauScore : Valeur du nouveau score qu'il faudra appliquer au joueur
int scorePaire(int Score, int ValD){
    //generation d'un score temporaire:
    int NouveauScore;
    if(score%2 == 0){ //Si le score est pair
        NouveauScore = Score+valD; //Score + valeur du de
    }else{
        NouveauScore = Score; //pas de changement du score
    }
    return NouveauScore //renvoi du nouveau score
}