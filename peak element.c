#include <stdio.h>

int findPeakElement(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return arr[mid];

        if (mid < n - 1 && arr[mid] < arr[mid + 1])
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {5, 10, 20, 15};
    int i;
    for( i=0;i<4;i++){
      printf("%d ",arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakElement = findPeakElement(arr, n);

    if (peakElement != -1)
        printf("\nPeak element: %d\n", peakElement);
    else
        printf("\nNo peak element found.\n");

    return 0;
}
