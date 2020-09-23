int main() 
{
    int player1Solde;
    int player2Solde;
    int player1Value;
    int player2Value;

    int dice;
    int turn;

    player1Value = getPlayerValue();
    player2Value = getPlayerValue();

    while(player1 != player1Value && player2 != player2Value)
    {
        int playerSoldeTurn = (turn == 0 ? player1Solde : player2Solde);
        int playerValueTurn = (turn == 0 ? player1Value : player2Value);

        dice = diceValue();

        playerSolde += dice;

        if (condEleven(playerTurn))
        {

        }

        turn = turn == 0 ? 1 : 0;
    }
}