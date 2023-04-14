#include <stdio.h>

int main()
{
int arr[5] = {18, 30, 15, 70, 12};

int item = 50, i, position = 3;

printf("Array elements are :\n");

for(i = 0; i<5; i++)
{
printf("arr[%d] = %d\n", i, arr[i]);
}
 arr[position-1] = item;

printf("\nArray elements after updation:\n");

for(i = 0; i<5; i++)
{
printf("arr[%d] = %d\n", i, arr[i]);
}
return 0;
}
