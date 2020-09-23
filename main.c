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

    while(player1 >= player1Value && player2 >= player2Value)
    {
        dice = diceValue();

        if (turn == 0) 
        {
            player1Solde += dice;

            player1Solde = condEleven(player1Solde);
            player1Solde = condPair(player1Solde, dice);
            player1Solde = condFive(player1Solde, dice);
            player1Solde = condEqual(player1Solde, dice);
        }
        else 
        {
            player2Solde += dice;

            player2Solde = condEleven(player2Solde);
            player2Solde = condPair(player2Solde, dice);
            player2Solde = condFive(player2Solde, dice);
            player2Solde = condEqual(player2Solde, dice);
        }

        turn = turn == 0 ? 1 : 0;
    }

    checkWinnersLosers(player1Solde, player2Solde)
}