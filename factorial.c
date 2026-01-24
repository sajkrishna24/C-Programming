#include<stdio.h>
int factorial_recursive(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial_recursive(n-1);
    }
}
int main()
{
    int number;
    printf("Enter a positive number: ");
    scanf("%d",&number);
    if(number<0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of %d using recursive approach is: %d\n",number,factorial_recursive(number));
    }
    return 0;
}