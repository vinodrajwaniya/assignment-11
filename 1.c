#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter an number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
     printf("Sum of %d's is %d",n,sum);
    getch();
}
