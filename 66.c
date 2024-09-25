// C Program to display the contents of an integer array using pointers
#include <stdio.h>
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6};
    int *p = arr;
    printf("Contents of array are as  ");
    for (int i = 0; i < 6; i++)
        printf("%d ", *p++);

    return 0;
}