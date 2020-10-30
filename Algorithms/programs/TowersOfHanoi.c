/*****************************Towers Of Hanoi********************************/
/***************************Author:Aanchal Gupta*****************************/
/****************************************************************************/
#include<stdio.h>
int TOH(int n,int a,int b,int c)
{
    if(n==1)
    {
        printf("\nTransfer disk from :%c to %c",a,c);
        return;
    }
    else
    {
        TOH(n-1,'a','c','b');
        printf("\nTransfer disk from :%c to %c",a,c);
        TOH(n-1,'b','a','c');
    }
}
void main()
{
    int n;
    printf("Enter a value");
    scanf("%d",&n);
    TOH(n,'a','b','c');
    return 0;
}
