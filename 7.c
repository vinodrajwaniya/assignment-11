#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,n;
    printf("Enter an number ");
    scanf("%d",&n);
    while(n!=0)
        {
        n=n/10;
        i++;
        }
    printf("%d",i);
    getch();
}
