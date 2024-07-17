#include<stdio.h>
int x,y,z;
float k;
int main ()
{
printf("Enter x:");
scanf("%d",&x);
printf("Enter y:");
scanf("%d",&y);
printf("Enter z:");
scanf("%d",&z);
k=x+y*z/4%2-1;
printf("%f",k);

}
