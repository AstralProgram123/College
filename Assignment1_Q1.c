#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number of elements to be inserted: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int avg=sum/n;
    printf("the average of the entered list is: %d",avg);
    return 0;
}
