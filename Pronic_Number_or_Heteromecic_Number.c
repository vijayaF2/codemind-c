#include<stdio.h>
int main()
{
    int n,x,f=0;
    scanf("%d",&n);
    for(x=1;x<n;x++)
    {
    if(n==x*(x+1))
    {
       f=1;
    }
    }
    if(f==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}