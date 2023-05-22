#include<stdio.h>
int main()
{
    int n,r,temp,s=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    printf("%d",s);
    
}