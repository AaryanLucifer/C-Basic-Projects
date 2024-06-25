// Name :- Aaryan Modi
// Project Name :- Driving Agency Driver Details
/*Method 1*/

#include <stdio.h>
#include <string.h>

typedef struct driver
{
    char name[55];
    char DlNo[55];
    char route[55];
    int Kms;
} dr;

int main()
{
    char input;
    dr d[5];

    printf("\n");
    printf("Enter your driving details one by one\n");
    printf("Press Q to quit the program\n");
    printf("Press any key to Continue\n\n");

    printf("*Important*\nDon't Enter Any Spaces\n");

    scanf("%c", &input);

    if (input == 'Q' || input == 'q')
    {
        printf("Your Are Quitted");
        goto end;
    }
    for (int i = 1; i <= 3; i++)
    {
        printf("Driver No. %d\n", i);

        printf("Enter Your Name\n");
        scanf("%s", &d[i].name);

        printf("Enter Your DL No.\n");
        scanf("%s", &d[i].DlNo);

        printf("Enter Your Route \n");
        scanf("%s", &d[i].route);

        printf("Enter Your Your Driving Experience in Kms\n");
        scanf("%d", &d[i].Kms);

        printf("\n");

        if (i == 1 || i == 2)
        {
            printf("Next One!\n");
        }
        else
        {
            printf("Program Ended!\n");
        }
    }

    printf("\n");

    printf("***Details of Drivers***\n\n");

    for (int i = 1; i <= 3; i++)
    {
        printf("Driver No. %d\n\n", i);

        printf("Name :- %s\n", d[i].name);
        printf("DL No. :- %s\n", d[i].DlNo);
        printf("Route :- %s\n", d[i].route);
        printf("Driving Experience :- %d\n\n", d[i].Kms);
    }

    printf("Thank You\n");

end:

    return 0;
}

/*Method 2*/

// #include <stdio.h>
// #include <string.h>

// typedef struct driver
// {
//     char name[55];
//     char DlNo[55];
//     char route[55];
//     int Kms;
// } dr;

// int main()
// {
//     char input;
//     dr d1, d2, d3;

//     printf("\n");
//     printf("Enter your driving details one by one\n");
//     printf("Press Q to quit the program\n");
//     printf("Press any key to Continue\n\n");

//     printf("*Important*\nDon't Enter Any Spaces\n");

//     scanf("%c", &input);

//     if (input == 'Q' || input == 'q')
//     {
//         printf("Your Are Quitted");
//         goto end;
//     }
//     for (int i = 1; i <= 3; i++)
//     {
//         switch (i)
//         {
//         case 1:
//             printf("Driver No. %d\n", i);

//             printf("Enter Your Name\n");
//             scanf("%s", &d1.name);

//             printf("Enter Your DL No.\n");
//             scanf("%s", &d1.DlNo);

//             printf("Enter Your Route \n");
//             scanf("%s", &d1.route);

//             printf("Enter Your Your Driving Experience in Kms\n");
//             scanf("%d", &d1.Kms);

//             printf("\n");

//             printf("Next One!\n");

//             break;
//         case 2:
//             printf("Driver No. %d\n", i);

//             printf("Enter Your Name\n");
//             scanf("%s", &d2.name);

//             printf("Enter Your DL No.\n");
//             scanf("%s", &d2.DlNo);

//             printf("Enter Your Route \n");
//             scanf("%s", &d2.route);

//             printf("Enter Your Your Driving Experience in Kms\n");
//             scanf("%d", &d2.Kms);

//             printf("\n");

//             printf("Next One!\n");

//             break;
//         case 3:
//             printf("Driver No. %d\n", i);

//             printf("Enter Your Name\n");
//             scanf("%s", &d3.name);

//             printf("Enter Your DL No.\n");
//             scanf("%s", &d3.DlNo);

//             printf("Enter Your Route \n");
//             scanf("%s", &d3.route);

//             printf("Enter Your Your Driving Experience in Kms\n");
//             scanf("%d", &d3.Kms);

//             printf("\n");

//             printf("Program Ended!\n");

//             break;
//         }
//     }

//     printf("\n");

//     printf("***Details of Drivers***\n\n");

//     printf("Driver No. 1\n\n");

//     printf("Name :- %s\n", d1.name);
//     printf("DL No. :- %s\n", d1.DlNo);
//     printf("Route :- %s\n", d1.route);
//     printf("Driving Experience :- %d\n\n", d1.Kms);

//     printf("Driver No. 2\n\n");

//     printf("Name :- %s\n", d2.name);
//     printf("DL No. :- %s\n", d2.DlNo);
//     printf("Route :- %s\n", d2.route);
//     printf("Driving Experience :- %d\n\n", d2.Kms);

//     printf("Driver No. 3\n\n");

//     printf("Name :- %s\n", d3.name);
//     printf("DL No. :- %s\n", d3.DlNo);
//     printf("Route :- %s\n", d3.route);
//     printf("Driving Experience :- %d\n\n", d3.Kms);

//     printf("Thank You\n");

// end:

//     return 0;
// }
