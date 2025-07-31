#include <stdio.h>
void InsertElement(int *ptr, int size, int element, int pos)
{
  if (pos > size)
  {
    printf("Invalid Position");
  }
  printf("Orginal Elements are: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d\n", *(ptr + i));
  }
  for (int i = size - 1; i >= pos; i--)
  {
    *(ptr + i + 1) = *(ptr + i);
  }
  size++;
  *(ptr + pos) = element;
  printf("Now Elements are: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d\n", *(ptr + i));
  }
}
int main()
{
  int arr[5] = {1, 2, 3, 4};
  InsertElement(arr, 4, 5, 3);
  return 0;
}