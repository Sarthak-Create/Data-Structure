#include<stdio.h>
int main()
{
    int arr[20],i, find, number;
    printf("Number of elements:");
    scanf("%d",&number);

    printf("Enter array elements:\n");

    for(i=0;i<number;++i)
        scanf("%d",&arr[i]);

    printf("Enter element to search:");
    scanf("%d",&find);

    for(i=0;i<number;++i)

        if(arr[i]==find)
            break;

    if(i<number)
        printf("Element found at index %d",i);
    else
        printf("Element not found");

    return 0;
}
