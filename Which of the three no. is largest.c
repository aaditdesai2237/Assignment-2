#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter first no.A ");
    scanf("%d",&a);
    printf("Enter second no. B ");
    scanf("%d" ,&b);
    printf("Enter third no.C ");
    scanf("%d",&c);
    if (a>b && a>c)
    {
    printf("no.A %d is the largest" ,a);
    }
    else if (b>a && b>c)
    {
    printf("no.B %d is the largest" ,b);
    }
    else
    {
    printf("no.C %d is the largest" ,c);
    }
    if (a<b && a<c)
    {
    printf(" and no.A %d is the smallest" ,a);
    }
    else if (b<a && b<c)
    {
    printf(" and no.B %d is the smallest" ,b);
    }
    else
    {
    printf(" and no.C %d is the smallest" ,c);
    }}
