#include <stdio.h>
int BinarySearch(int *ptr, int size, int element)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (*(ptr + mid) == element)
        {
            return mid;
        }
        else if (*(ptr + mid) > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 60, 70, 100, 112};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 70;
    int index = BinarySearch(arr, size, element);
    if (index != -1)
    {
        printf("%d element found at index %d", element, index);
    }
    else{
        prinf("The element is not found !");
    }
    return 0;
}