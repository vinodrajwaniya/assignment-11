#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r,x;
    printf("Enter an number's ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        x=x*10+r;
        n=n/10;
    }
    printf("Reverse no is %d",x);

    getch();
}
