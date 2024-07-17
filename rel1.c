#include<stdio.h>
int x=10,y=20,z;
int n;
int main()
{
printf("Enter the serial no: ");
scanf("%d",&n);
if (n<=7)
{



        switch(n)
        {
            case 1:
                    if(x<y)
                    {
                        printf("true");
                    }
                    else
                    {
                           printf("false");
                    }
                    break;
            case 2:

                    if(x>y)
                    {
                        printf("true");
                    }
                    else
                    {
                           printf("false");
                    }

                    break;

             case 3:
                    if(x<=y)
                    {
                        printf("true");
                    }
                    else
                    {
                           printf("false");
                    }

                    break;
             case 4:

                    if((x*x-y)>(y*y-x))
                    {
                        printf("true");
                    }
                    else
                    {
                           printf("false");
                    }

                    break;
            case 5:
                    if((x*x*x)<(y*x*x))
                    {
                        printf("true");
                    }
                    else
                    {
                           printf("false");
                    }

                    break;

             case 6:
                    if(((x*y)!=(y*x)))
                    {
                        printf("true");
                    }
                    else
                    {
                           printf("false");
                    }

                    break;

            case 7:
                    if(((x*y)==(y*x)))
                    {
                        printf("true");
                    }
                    else
                    {
                           printf("false");
                    }

                    break;

        }
}
else
{
    printf("invalid input");
}
}
