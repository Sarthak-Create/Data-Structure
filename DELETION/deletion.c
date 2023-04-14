#include<stdio.h>

int main()
{

    int erase, i,number, position = -1;
    int arr[30];

    printf("Enter the number of elements:");
    scanf("%d",&number);

    printf("Enter array elements:");
    for (i = 0; i < number; i++)
        scanf("%d",&arr[i]);

    // print the original array
    printf("Array before Deletion: ");

    for (i = 0; i < number; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Enter element to delete: ");
    scanf("%d",&erase);

    for(i = 0; i < number; i++)
    {
        if(arr[i] == erase)
        {
            position = i;
            break;
        }
    }

    if(position != -1)
    {
        //shift elements backwards by one position

        for(i = position; i < number - 1; i++)
            arr[i] = arr[i+1];

        printf("Array after deletion: ");

        for(i = 0; i < number - 1; i++)
            printf("%d ",arr[i]);
    }
    else
        printf("Element Not Found\n");

    return 0;
}
