#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter an number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("The sum no. %d\n",2*i);
        sum=sum+2*i;
    }
    printf("sum of %d is %d",n,sum);
    getch();
}
