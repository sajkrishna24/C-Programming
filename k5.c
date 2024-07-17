#include<stdio.h>
int x,y,z;
int main ()
{
printf("Enter x:");
scanf("%d",&x);
printf("Enter y:");
scanf("%d",&y);
printf("Enter z:");
scanf("%d",&z);
y=x+y-(x=y);
printf("%f",y);

}
