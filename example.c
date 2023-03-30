#include <stdio.h>

void find_elements_with_sum_zero(int arr[], int n) {
    int i, j, flag = 0;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == 0) {
                printf("%d %d ", arr[i], arr[j]);
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        printf("No Elements found");
    }
}

int main() {
    //int arr[] = {1, 2, -2, -1, 4, -4};
    int arr[] = {-4,5,3,-2,1};
    int n = sizeof(arr)/sizeof(arr[0]);


    find_elements_with_sum_zero(arr, n);
    return 0;
}
