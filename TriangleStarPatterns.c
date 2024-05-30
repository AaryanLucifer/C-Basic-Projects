
/*Printing Star Patterns*/

#include <stdio.h>

int main()
{
    char star;
    int count;

    while (1)
    {

        printf("Choose the star pattern from following\n\n");
        printf(" 1. Triangular Star Pattern\n");
        printf(" 2. Reverse Triangular Star Pattern\n\n");
        printf(" Press Q to Quit\n\n");

        scanf(" %c", &star);

        if (star == 'q' || star == 'Q') // For Quiting the program.
        {
            printf("You have been quited");
            break;
        }

        else if (star == '1') // For Printing Triangular Star Pattern.
        {
            printf("How many max stars do you want ?\n");
            scanf("%d", &count);

            printf("Your Star Pattern is\n\n");

            for (int i = 1; i <= count; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }

                printf("\n");
            }

            printf("\n");
        }

        else if (star == '2') // For Printing Reverse Triangular Star Pattern.
        {
            printf("How many max stars do you want ?\n");
            scanf("%d", &count);

            printf("Your Star Pattern is\n\n");

            for (int i = 1; i <= count; i++)
            {
                for (int j = count; j >= i; j--)
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
        }
    }

    return 0;
}
