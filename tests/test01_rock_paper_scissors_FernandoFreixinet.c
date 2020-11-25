/****************************************************************************
*
*	TEST EXERCISE 01: Rock, Paper, Scissor
*
*	Student name: Fernando Freixinet
*
*   - Game consists of multiple rounds and the winner must win 2 rounds.
*   - Game must finish if player decides to not continue with the game.
*   - Program must show every round: Played Rounds, Player Wins, CPU Wins.
*   - Program must show at the end: Total Games Won by Player and CPU.
*   - Required functions must be implemented and used.
*
*   WARNING! REMEMBER:
*
*	    - Program must compile. No compiling program is a 0 in the mark.
*	    - Program must be perfectly tabulated and spaced.
*	    - Program must follow required naming conventions.
*	    - Program must show screen results organized and styled.
*
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char PlayerSelection(int *keepPlaying);
char CpuSelection(void);
void CheckResult(char playerSelection, char cpuSelection, int* result);

int main()
{
    int keepPlaying = 1;
    int gamesWonPlayer = 0;
    int gamesWonCpu = 0;
    int roundsWonPlayer = 0;
    int roundsWonCpu = 0;
    char playerSelection = '-';
    char cpuSelection = '-';
    int roundResult = 0;
    int roundsCount = 0;
    char nextGameAns = '-';

    // TODO 1: Start the game loop (1p) 
    while (keepPlaying == 1)
    {

        // Get player selection
        playerSelection = PlayerSelection(&keepPlaying);    // TODO 2: Implement function (2p)

        // Get CPU selection
        cpuSelection = CpuSelection();          // TODO 3: Implement function (1p)

        // Check round results
        CheckResult(playerSelection, cpuSelection, &roundResult);   // TODO 4: Implement function (3p)

        // TODO 5: Check round results, save in corresponding variables and print info on screen (1p)
        if ((roundResult == 0) && (keepPlaying == 1))
        {
            printf("It's a draw!\n");
            roundsCount++;

            printf("---------------------\n");
            printf("rounds played: %i\nPlayer victories: %i\nCPU victories: %i\n", roundsCount, roundsWonPlayer, roundsWonCpu);
            printf("---------------------\n\n");
        }
        else if (roundResult == 1)
        {
            printf("You win this round!\n");
            roundsWonPlayer++;
            roundsCount++;

            printf("---------------------\n");
            printf("rounds played: %i\nPlayer victories: %i\nCPU victories: %i\n", roundsCount, roundsWonPlayer, roundsWonCpu);
            printf("---------------------\n\n");
        }
        else if (roundResult == 2)
        {
            printf("CPU wins this round!\n");
            roundsWonCpu++;
            roundsCount++;

            printf("---------------------\n");
            printf("rounds played: %i\nPlayer victories: %i\nCPU victories: %i\n", roundsCount, roundsWonPlayer, roundsWonCpu);
            printf("---------------------\n\n");
        }

        // TODO 6: Check game results, save in corresponding variables and print info on screen (1p)
        // TODO 7: Reset required variables and show required messages for next game (or finish) (1p)
        if (roundsWonPlayer == 2)
        {
            printf("CONGRATULATIONS!\nYOU WON THIS GAME!\n\n");
            gamesWonPlayer++;
            roundsCount = 0;
        }
        else if (roundsWonCpu == 2)
        {
            printf("CPU WON THIS GAME!\nBetter luck next time...\n\n");
            gamesWonCpu++;
            roundsCount = 0;
        }

        if (roundsCount == 0)
        {
            roundsWonPlayer = 0;
            roundsWonCpu = 0;

            printf("---------------------\n");
            printf("Games won by the player: %i\nGames won by the CPU: %i\n", gamesWonPlayer, gamesWonCpu);
            printf("---------------------\n\n");
            printf("Do you want to play another game? (y/n)\n");
            scanf_s(" %c", &nextGameAns);

            if (nextGameAns == 'y') printf("Preparing next game...\n");
            else if (nextGameAns == 'n')
            {
                printf("Thanks for playing!\nExiting the program...\n");
                keepPlaying = 0;
            }
            else printf("I don't know what you answered so I'll assume that you want to keep playing...\n");
        }
    }
    return 0;
}

// Check player selection
char PlayerSelection(int *keepPlaying)
{
    // TODO 2: This function must ask player for selection ('r' - Rock, 'p' - Paper, 's' - Scissor),
    // Selection must be validated before returned. (2p)
    char selection = '-';
    int selectionLoop = 1;
    while (selectionLoop == 1)
    {
        printf("Introduce your selection:\n'r' - Rock\n'p' - Paper\n's' - Scissor\nIntroduce 'x' to exit the program\n");
        scanf_s(" %c", &selection);

        if ((selection == 'r') || (selection == 'p') || (selection == 's'))
        {
            return selection;
            selectionLoop = 0;
        }
        else if (selection == 'x')
        {
            *keepPlaying = 0;
            selectionLoop = 0;
        }
        else printf("Invalid selection, try again\n");
    }
    selection = '-';
    selectionLoop = 1;
}


// Check CPU selection
char CpuSelection(void)
{
    // TODO 3: This function must return CPU selection ('r' - Rock, 'p' - Paper, 's' - Scissor),
    // Selection must be calculated randomly. (1p)
    int cpuPlay = -1;
    char selection = '-';
    srand(time(NULL));
    cpuPlay = rand() % 3;
    switch (cpuPlay)
    {
        case 0:
        {
            selection = 'r';
            break;
        }
        case 1:
        {
            selection = 'p';
            break;
        }
        case 2:
        {
            selection = 's';
            break;
        }
        default:
        {
            break;
        }
            
    }
    
    return selection;
    printf("%i", selection);
}

// Check results for the round
void CheckResult(char playerSelection, char cpuSelection, int *result)
{
    // TODO 4: This function must check which one of the two players (Player, CPU) is the winner for 
    // the round and return the result by reference: 1-Player, 2-CPU. (3p)

    if (playerSelection == 'r')
    {
        if (cpuSelection == 'r') *result = 0;
        else if (cpuSelection == 'p') *result = 2;
        else if (cpuSelection == 's') *result = 1;
    }
    else if (playerSelection == 'p')
    {
        if (cpuSelection == 'r') *result = 1;
        else if (cpuSelection == 'p') *result = 0;
        else if (cpuSelection == 's') result = 2;
    }
    else if (playerSelection == 's')
    {
        if (cpuSelection == 'r') *result = 2;
        else if (cpuSelection == 'p') *result = 1;
        else if (cpuSelection == 's') *result = 0;
    }
}
