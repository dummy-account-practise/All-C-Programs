#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter a number: ");
    //taking a number from user
    scanf("%d",&a);
    if(a%2==0)
        //checking divisibility rule
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

