#include <stdio.h>
int main()
{
   int array[100],n,x,low,high;  
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   printf("Enter %d numbers\n", n);
   while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return -1;
}
