// Creator :- Aaryan Modi
// Project Name :- Employee Id Entering Using Dynamic Memory Allocation
 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int len;
    char *ptr;

    for (int j = 1; j <= 3; j++)
    {

    start:
        printf("Employee No. %d\n\n", j);

        printf("Enter the No. of characters in your Employee ID\n");
        scanf("%d", &len);

        ptr = (char *)calloc(len + 1, sizeof(char));

        printf("Enter Your Employee ID\n");
        // ********Important*********//

        // scanf("%s", &(*ptr));

        // or

        scanf("%s", ptr); // ptr = &(*ptr)

        printf("\n");

        if (strlen(ptr) == len)
        {
            printf("Your Entered Employee ID is %s\n\n", ptr);
        }

        else
        {
            printf("***Invalid Input***\n*Please try again*\n\n");
            goto start;
        }

        free(ptr);
    }

    return 0;
}
