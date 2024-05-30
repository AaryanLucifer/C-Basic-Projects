
/*Printing Star Patterns*/

#include <stdio.h>

void starpattern(int star)
{
    for (int i = 1; i <= star; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");
}

void reversestarpattern(int star)
{
    for (int i = 1; i <= star; i++)
    {
        for (int j = star; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    /*Or*/

    // for (int i = count; i >=1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /*Or*/ // Hit and Trial

    // for (int i = 1; i <= star; i++)
    // {
    //     for (int j = 1; j <= star - i + 1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
}

int main()
{
    char choose;
    int star;

    while (1)
    {

        printf("Choose the star pattern from following\n\n");
        printf(" 1. Triangular Star Pattern\n");
        printf(" 2. Reverse Triangular Star Pattern\n\n");
        printf(" Press Q to Quit\n\n");

        scanf(" %c", &choose);

        if (choose == 'q' || choose == 'Q') // For Quiting the program.
        {
            printf("You have been quited");
            break;
        }

        else if (choose == '1') // For Printing Triangular Star Pattern.
        {
            printf("How many max stars do you want ?\n");
            scanf("%d", &star);

            printf("Your Star Pattern is\n\n");

            starpattern(star);
            printf("\n");
        }

        else if (choose == '2') // For Printing Reverse Triangular Star Pattern.
        {
            printf("How many max stars do you want ?\n");
            scanf("%d", &star);

            printf("Your Star Pattern is\n\n");

            reversestarpattern(star);
            printf("\n");
        }
    }

    return 0;
}
