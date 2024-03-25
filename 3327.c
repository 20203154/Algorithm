#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arr[1000001];
    int n, x, count = 0;
    
    scanf("%d", &n);
    for (int k = 0; k < n; k++) {
        scanf("%d", &arr[k]);
    }
    scanf("%d", &x);
    qsort(arr, n, sizeof(int), compare);
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == x) {
            count++;
            left++;
            right--;
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }
    
    printf("%d", count);
    return 0;
}
