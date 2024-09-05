ergeTwoArray(int arrA[],int arrB[],int arrC[],int m,int n)
// {
//     int i,j,k;
//     i=j=k=0;
//     while(i<m && j<n)
//     {
//         if(arrA[i]<arrB[j])
//         {
//             arrC[k]=arrA[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             arrC[k]=arrB[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<m)
//     {
//         arrC[k]=arrA[i];
//         i++;
//         k++;
//     }
//      while(j<n)
//     {
//         arrC[k]=arrB[j];
//         j++;
//         k++;
//     }
//     return arrC[m+n];
// }