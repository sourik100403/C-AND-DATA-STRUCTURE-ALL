// #include<stdio.h>
// int frequency(int arr[],int n)
// {
//     int countf[100]={0};
//     //for count
//     for(int i=0;i<n;i++)
//     {
//         countf[arr[i]]++;
//     }
//     for(int i=0;i<100;i++)
//     {
//         if(countf[i]>0)
//         {
//             printf("%d : %d",i,countf[i]);

//         }
//     }
// }
// int main()
// {
//  int arr1[] = {10, 5, 10, 15, 10, 5};
//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     printf("Example 1:\n");
//     frequency(arr1, size1);

//     // Example 2
//     int arr2[] = {2, 2, 3, 4, 4, 2};
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);
//     printf("Example 2:\n");
//     frequency(arr2, size2);

//     return 0;
// }



#include <stdio.h>

void countFrequencies(int arr[], int size) {
    // Create an array to store the frequencies
    int frequency[100] = {0};  // Assuming the values in arr are in the range 0 to 99

    // Count the frequency of each element
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    // Print the frequencies
    for (int i = 0; i < 100; i++) {
        if (frequency[i] > 0) {
            printf("%d  %d\n", i, frequency[i]);
        }
    }
}

int main() {
    // Example 1
    int arr1[] = {10, 5, 10, 15, 10, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Example 1:\n");
    countFrequencies(arr1, size1);

    // Example 2
    int arr2[] = {2, 2, 3, 4, 4, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Example 2:\n");
    countFrequencies(arr2, size2);

    return 0;
}
