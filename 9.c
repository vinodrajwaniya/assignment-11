#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,L;
    printf("Enter two number's ");
    scanf("%d %d",&a,&b);
    L=a>b?a:b;
    for(L=1;L<=a*b;L++)
        if(L%a==0 && L%b==0)
            break;


    printf("Lcm is %d",L);


    getch();
}
