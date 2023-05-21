#include<stdio.h>
int main()
{
    int n,i,f;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
        {
            printf("False");
        }
    
}