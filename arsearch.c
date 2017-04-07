///Program to search for an element in an array
#include<stdio.h>
void main()
{
    int arr[100],e,i,n, flag=0;

    ///reading the array size
    printf("Enter the Array size:\n");
    scanf("%d",&n);

    ///inserting the array elements
    printf("Enter the Array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    ///inserting the element to be searched for
    printf("\nEnter the element to be searched:");
    scanf("%d",&e);

    ///if element found, display the position where it is found
    for(i=0;i<n;i++)
    {
        if(arr[i]==e)
        {
            printf("\nElement %d found at %d position",arr[i],i);
            flag=1;      ///to know that the program has entered body of the 'if' statement
            break;
        }

    }

    //displaying that element in not found
    if(flag==0)
    {
        printf("\nElement not found");
    }
}
