#include<stdio.h>
int main()
{
    int a,b,i,j,c=0,d=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            c=c+i;
        }
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        {
            d=d+j;
        }
    }
    if(a==d && b==c)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}