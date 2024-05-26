#include <stdio.h>

int main()
{
    int value;
    char convers;

    while (1)
    {
        printf("Choose conversation you want to perform from the following :-\n\n");

        printf("1.kms to miles\n");
        printf("2.miles to kms\n");
        printf("3.inches to foot\n");
        printf("4.foot to inches\n");
        printf("5.pound to kgs\n");
        printf("6.kgs to pound\n");
        printf("7.inches to meters\n");
        printf("8.meters to inches\n\n");

        printf("Press Q to quit the program\n\n");

        scanf(" %c", &convers); // Space is for stop program to execute two times.

        if (convers == '1')
        {
            printf("Enter Your value in kms :-\n");
            scanf("%d", &value);
            printf("%d kms is equals to %f miles\n\n\n", value, value * 0.621371);
        }
        else if (convers == '2')
        {
            printf("Enter Your value in miles :-\n");
            scanf("%d", &value);
            printf("%d miles is equals to %f kms\n\n\n", value, value * 1.60934);
        }
        else if (convers == '3')
        {
            printf("Enter Your value in inches :-\n");
            scanf("%d", &value);
            printf("%d inches is equals to %f foot\n\n\n", value, value * 0.0833333);
        }
        else if (convers == '4')
        {
            printf("Enter Your value foot :-\n");
            scanf("%d", &value);
            printf("%d foot is equals to %d inches\n\n\n", value, value * 12);
        }
        else if (convers == '5')
        {
            printf("Enter Your value pound :-\n");
            scanf("%d", &value);
            printf("%d pound is equals to %f kgs\n\n\n", value, value * 0.453592);
        }

        else if (convers == '6')
        {
            printf("Enter Your value kgs :-\n");
            scanf("%d", &value);

            printf("%d kgs is equals to %f pound\n\n\n", value, value * 2.20462);
        }

        else if (convers == '7')
        {
            printf("Enter Your value inches :-\n");
            scanf("%d", &value);
            printf("%d inches is equals to %f meters\n\n\n", value, value * 0.0254);
        }
        else if (convers == '8')
        {
            printf("Enter Your value meters :-\n");
            scanf("%d", &value);
            printf("%d meters is equals to %f inches\n\n\n", value, value * 39.3701);
        }

        else if (convers == 'q')
        {
            printf("You are outside the program\n\n");
            break;
        }
        else
        {
            printf("Error: Invalid Input\n       Try Again\n\n");
        }
    }
    return 0;
}
