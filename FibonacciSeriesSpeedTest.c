#include<stdio.h>

/*Fibonacci Series with two approaches.*/
/*Checking Recursive approach is sometimes too much slower than Iterative approach*/

/*Recursive Approach*/ //#Slower

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    else
    {
        return (fib_recursive(n-1) + fib_recursive(n-2));
    }
    
}

/*Iterative Approach*/ //#Faster

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a + b;
        a = b - a;
    }
        return a;
    
}
int main()
{
    while (1)
    {
        
    
    int n;
    printf("Enter any term in starting from 1 of fibonacci series :-\n");
    scanf("%d", &n);

    //Check Speed by comment out one of these print statements.
    printf("The %d term of fibonacci series is = %d\n",n,fib_recursive(n));
    printf("The %d term of fibonacci series is = %d\n\n\n",n,fib_iterative(n)); 

    

    }
    return 0;


    /*Conclusion*/

    //  Iterative approach is faster than recursive approach in this case.
}
