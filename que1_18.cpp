/*Write a program to find greatest of three numbers using nested if-else.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("a is max & c is min");
        }
        else if(b<c)
        {
            printf("a is max & b is min");
        }
    }
     if(b>a && b>c)
    {
        if(a>c)
        {
            printf("b is max & c is min");
        }
        else if(a<c)
        {
            printf("b is max & a is min");
        }
    }
     if(c>a && c>b)
    {
        if(a>b)
        {
            printf("c is max & b is min");
        }
        else if(a<b)
        {
            printf("c is max & a is min");
        }
    }
}