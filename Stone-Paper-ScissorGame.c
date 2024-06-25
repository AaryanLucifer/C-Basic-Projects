// Creator :- Aaryan Modi
// Project Name :- Stone-Paper-Scissor Game Using C language

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int pi, ci, plsc, compsc;
    char name[35];

start:

    plsc = 0, compsc = 0;
    char c;
    ci = rand() % 3 + 1;

    printf("***Welocme to the Stone-Paper-Scissor Game***\n\n");
    printf("**This Game Runs 3 times**\n\n");

    printf("Enter Your name :-\n");
    scanf("%s", &name);
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        // TAKES INPUT FROM THE PLAYER

    play:

        printf("==> Press 1 to choose Stone\n==> Press 2 to choose Paper\n==> Press 3 to choose Scissor\n\n");
        printf("%s's Turn :- \n", name);
        scanf("%d", &pi);

        if (pi == 1)
        {
            printf("Stone\n");
        }
        else if (pi == 2)
        {
            printf("Paper\n");
        }
        else if (pi == 3)
        {
            printf("Scissor\n");
        }
        else
        {
            printf("*Invalid Input\n Try Again\n");
            goto play;
        }

        // GENERATE COMPUTER'S INPUT

        printf("\nComputer's Turn :- \n");
        printf("%d\n", ci);

        if (ci == 1)
        {
            printf("Stone\n\n");
        }
        else if (ci == 2)
        {
            printf("Paper\n\n");
        }
        else if (ci == 3)
        {
            printf("Scissor\n\n");
        }

        // DECIDING WHO WILL GET THE POINT

        if (pi == ci)
        {
            printf("*MATCH IS DRAWN*\n==> BOTH GOT 0 POINTS");
        }

        else if (pi == 1 && ci == 3 || pi == 2 && ci == 1 || pi == 3 && ci == 2)
        {
            printf("*%s WINS*\n==> %s GOT 1 POINT", name, name);
            plsc++;
        }

        else
        {
            printf("*%s LOSS*\n==> COMPUTER GOT 1 POINT", name);
            compsc++;
        }

        printf("\n\n%s's Score = %d\n", name, plsc);
        printf("Computer's Score = %d\n\n", compsc);
    }

    // DECIDING THE RESULT OF THE GAME

    printf("*FINAL SCORE*\n");
    printf("%s's Score = %d\n", name, plsc);
    printf("Computer's Score = %d\n\n", compsc);

    if (plsc > compsc)
    {
        printf("*CONGRATULATIONS %s*\n YOU WINS THE GAME\n\n", name);
    }

    else if (plsc < compsc)
    {
        printf("*YOU LOSS THE GAME*\n BETTER LUCK NEXT TIME\n\n");
    }

    else
    {
        printf("*GAME IS DRAWN*\nNOBODY WINS\n\n");
    }

    // TO CATCH UNNECESSARY "ENTER KEY" PRESS
    getchar();

    // AFTER GAME ENDS

    printf("Press Q to Quit \nPress R to Restart the game\n");
    scanf("%c", &c);

    if (c == 'Q' || c == 'q')
    {
        printf("*You are quitted the game*\n*Thank You*\n");
        goto end;
    }

    else if (c == 'R' || c == 'r')
    {
        printf("Again\n");
        goto start;
        printf("\n");
    }

end:

    return 0;
}
