#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%d",j+1);
        }
        printf("
");
        
    }
    return 0;
}