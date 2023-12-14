#include<stdio.h>
#include<stdlib.h>

// This function prints common elements in ar1
int findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3){
    // Initialize starting indexes for ar1[], ar2[] and
    // ar3[]
    int i = 0, j = 0, k = 0;
 
    // Iterate through three arrays while all arrays have
    // elements
    while (i < n1 && j < n2 && k < n3){
        // If x = y and y = z, print any of them and move
        // ahead in all arrays
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]){
            //printf("%d ", ar1[i]);
            return ar1[i];
            i++;
            j++;
            k++;
        }
 
        // x < y
        else if (ar1[i] < ar2[j]) i++;
 
        // y < z
        else if (ar2[j] < ar3[k]) j++;
 
        // We reach here when x > y and z < y, i.e., z is
        // smallest
        else k++;
    }
    return -1;
}
 
// Driver code
int main(){
    int n;
    int size1, size2, size3;
    scanf("%d", &n);

    while (n--){
            scanf("%d", &size1);
            int arr1[size1];
            for (int i = 0; i < size1; i++) {
                scanf("%d", &arr1[i]);
            }

            scanf("%d", &size2);
            int arr2[size2];
            for (int i = 0; i < size2; i++) {
                scanf("%d", &arr2[i]);
            }

            scanf("%d", &size3);
            int arr3[size3];
            for (int i = 0; i < size3; i++) {
                scanf("%d", &arr3[i]);
            }

            int result = findCommon(arr1, arr2, arr3, size1, size2, size3);

            if (result != -1) {
                printf("%d\n", result);
            } else {
                printf("No answer\n");
            }
        }
    return 0;
}