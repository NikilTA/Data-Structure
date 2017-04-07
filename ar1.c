//program for finding the largest, smallest and sum of array elements
#include<stdio.h>
void main()
{
    int arr[100], large, small,sum,n,i;
    printf("Enter the Array size:\n");
    scanf("%d",&n);//reading the array size
    printf("Enter the Array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//inserting the array elements
    }
    large=small=arr[0];//initialising the 1st element as large and small value
    sum=0;
    for(i=0;i<n;i++)//loop for going through the entire array
    {
        sum+=arr[i];//finding the sum
        if(arr[i]>large)//checks for the largest element
        {
            large=arr[i];
        }
        if(arr[i]<small)//checks for the smallest array
        {
            small=arr[i];
        }

    }
    printf("\nLargest element:%d",large);
    printf("\nSmallest element:%d",small);
    printf("\nSum of elements of array:%d",sum);

}
