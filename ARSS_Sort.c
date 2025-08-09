#include <stdio.h>
void ArssSort(int *arr, int size)
{
    int element, index, swap;
    for (int i = 0; i < size - 1; i++)
    {
        element = *(arr + i);
        index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                if (element > *(arr + j))
                {
                    element = *(arr + j);
                    index = j;
                }
            }
        }
        if (index != i)
        {
            swap = *(arr + i);
            *(arr + i) = *(arr + index);
            *(arr + index) = swap;
        }
    }
    printf("Sorted Element\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr + i));
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    ArssSort(arr, size);
    return 0;
}