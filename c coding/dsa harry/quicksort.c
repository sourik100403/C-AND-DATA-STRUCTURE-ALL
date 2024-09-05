#include <stdio.h>
int printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int split(int arr[], int low, int high)
{
    int pvot, i, j, temp;
    pvot = arr[low];
    i = low + 1;
    j = high;
    do
    {
        while (arr[i] < pvot)
        {
            i++;
        }
        while (arr[j] > pvot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
void quickSort(int arr[], int low, int high)
{
    int position;
    if (low < high)
    {
        position = split(arr, low, high);
        quickSort(arr, low, position - 1);  // sort left array
        quickSort(arr, position + 1, high); // sort right array
    }
}
int main()
{

    int arrA[] = {9, 14, 4, 8,100,123,123,100, 8, 4, 7, 5, 7, 6};
    int m = sizeof(arrA) / sizeof(arrA[0]);
    printArray(arrA, m);
    quickSort(arrA, 0, m - 1);
    printf("\n");
    printArray(arrA, m);
    return 0;
}