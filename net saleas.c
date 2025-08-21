#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter gross sales");
    scanf("%f",&a);
    if(a>20000)
    {
    b=a-(0.15*a);
    printf("The net sales is %f",b);
    }
    else if(a>10000 && a<20000)
    {
b=a-(0.1*a);
printf("The net sales is %f",b);
    }
    else
    {
    b=a-(0.05*a);
    printf("The net sales is %f",b);
    }
}
