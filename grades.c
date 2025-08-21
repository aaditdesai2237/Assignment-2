#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter marks of 3 subjects:");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/3;
    if(a<35 || b<35 || c<35)
    {
        printf("You are failed");
    }
    else if(d>=70)
{printf("Distinction");
}
else if(d>=60 && d<70)
{printf("First");
}
else if (d>=50 && d<60)
{printf("Second");
}
else if (d>=35 && d<50)
{printf("Third class");
}
else
{
    printf("Fail");
}
}

