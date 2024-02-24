#include<stdio.h>
int main()
{
    int a[10],i,n,count=0;
    printf("Enter the number of element in an array : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i-1])
        {
            count++;
            continue;
        }
    }
    printf("the monoton decreesing subsequens is %d",count);
    return 0;
    
}
