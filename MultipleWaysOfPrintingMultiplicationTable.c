# include <stdio.h>

/* 
Print multiplication table of a number entered by the user.
*/

int main()
{
    int a,i;
    
    printf("Enter the number you want multiplication table of :-\n");
    scanf("%d",&a); // if you add white space in "" with %d in scanf() funcn, you have to input a number twice.

    printf("Multiplication table of %d is :-\n\n", a);
    

    // // Basic Method

    // printf("%d X 1 = %d\n", a, a*1);
    // printf("%d X 2 = %d\n", a, a*2);
    // printf("%d X 3 = %d\n", a, a*3);
    // printf("%d X 4 = %d\n", a, a*4);
    // printf("%d X 5 = %d\n", a, a*5);
    // printf("%d X 6 = %d\n", a, a*6);
    // printf("%d X 7 = %d\n", a, a*7);
    // printf("%d X 8 = %d\n", a, a*8);
    // printf("%d X 9 = %d\n", a, a*9);
    // printf("%d X 10 = %d\n", a, a*10);

    // // Using Do while Loop

    // do
    // {
    //     printf("%d X %d = %d\n", a,i,a*i);
    //     i++;
    // } while (i<11);
    
    // // Using While Loop

    // while (i<11)
    // {
    //     printf("%d X %d = %d\n", a,i,a*i);
    //     i++;
    // }

    // // Using For Loop

    for (i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", a,i,a*i);
   
    }
    
    
    return 0;
}
