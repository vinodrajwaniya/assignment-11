#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,fact=1;
    printf("Enter an number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        //sum=sum*i;
    }
    printf("%d",fact);
    getch();
}
