#include<stdio.h>
int main()
{
    int n,s,r,add=0;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
        r=s%10;
        add=add+r;
        s=s/10;
    }
    if(n==add)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}