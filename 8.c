#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,n;
    printf("Enter an number ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
        if(n%i==0)
        break;
    if(n==i)
        printf("%d is Prime number ",n);
    else
        printf("%d is not a Prime number ",n);

    getch();
}
