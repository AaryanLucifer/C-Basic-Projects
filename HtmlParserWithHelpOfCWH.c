#include <stdio.h>
#include <string.h>

// Crazy Program

void parser(char *string)
{
    int in = 0; // Variable to track wheter we are inside the tag.
    int index = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 0;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 1;
            continue; // This is for not writing '>'
        }

        if (in == 1)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // Removing the trailing spces from the beginning

    while (string[0] == ' ')
    {
        // Shift the string to the left.
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }

    // Removing the trailing spces from the end

    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[55];
    printf("Enter any HTML tag in format of\n<tag>  line  </tag>\n");
    gets(string);

    parser(string);

    printf("The parsed string is ~~%s~~ ", string);
    return 0;
}
