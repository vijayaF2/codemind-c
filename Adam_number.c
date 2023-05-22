#include<stdio.h>
int main()
{
    int n,sq,r,s=0,rs,r1,s1=0;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    rs=s*s;
    while(rs>0)
    {
        r1=rs%10;
        s1=(s1*10)+r1;
        rs=rs/10;
        
    }
    if(s1==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}