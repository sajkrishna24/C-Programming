
#include<stdio.h>
int padovan_recursive(int n)
{
    if(n==0||n==1||n==2)
    {
        return 1;
    }
    else 
    {
        return padovan_recursive(n-2)+padovan_recursive(n-3);
    }
}
int main()
{
    int number;
    printf("Enter the number of terms: ");
    scanf("%d",&number);
    printf("Padovan Sequence up to %d using recursive approach is: \n",number);
    for (int i=0;i<number;i++)
    {
        printf("%d",padovan_recursive(i));
        printf("\n");
    }
    return 0;
}