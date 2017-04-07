#include<stdio.h>
void array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }


}
void main()
{
    int arr[10],n,i;
    printf("Enter the limit(<=10):");
    scanf("%d",&n);
    if(n<=10)
    {
        printf("\nEnter the array elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        array(arr,n);

    }
    else
    {
        printf("\nEntered limit is high");
    }

}
