#include <stdio.h>
#include <getplayervalue.h>
#include <dicevalue.h>
#include <condeleven.h>
#include <condpair.h>
#include <condfive.h>
#include <condequal.h>
#include <checkwinnerslosers.h>

int main()
{
    int player1Solde = 0;
    int player2Solde = 0;
    int player1Goal;
    int player2Goal;

    int dice;
    int turn = 0;

    player1Goal = getPlayerValue();
    player2Goal = getPlayerValue();

    while (player1Solde >= player1Goal && player2Solde >= player2Goal)
    {
        dice = diceValue();

        if (turn == 0)
        {
            player1Solde += dice;

            player1Solde = condEleven(player1Solde);
            player1Solde = condPair(player1Solde, dice);
            player1Solde = condFive(player1Solde, dice);
            player1Solde = condEqual(player1Solde, player2Solde dice);
        }
        else
        {
            player2Solde += dice;

            player2Solde = condEleven(player2Solde);
            player2Solde = condPair(player2Solde, dice);
            player2Solde = condFive(player2Solde, dice);
            player2Solde = condEqual(player1Solde, player2Solde, dice);
        }

        turn = turn == 0 ? 1 : 0;
    }

    checkWinnersLosers(player1Solde, player2Solde, player1Goal, player2Goal);
}