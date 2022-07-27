#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter an number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The sum no. %d\n",2*i+1);
        sum=sum+2*i+1;
    }
    printf("\nsum of %d is %d",n,sum);
    getch();
}
