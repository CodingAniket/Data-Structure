#include <stdio.h>
void DeleteElement(int *arr, int index, int size)
{
    if (index < 0 || index >= size)
    {
        printf("The index is not valid!");
        return;
    }
    for (int i = index; i < size - 1; i++)
    {
        *(arr + i) = *(arr + i + 1);
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr + i));
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 34, 5};
    DeleteElement(arr, 4, 6);
    return 0;
}