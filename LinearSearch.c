#include <stdio.h>
#include "custom.h"
int LinearSerach(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 55, 48, 66, 2};
    int element = 50;
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = LinearSerach(arr, element, size);
    if (res == -1)
    {
        printf("%d is not found!", element);
    }
    else
    {
        printf("%d is found at index %d", element, res);
    }
}