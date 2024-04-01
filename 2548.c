#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20000

int num[MAX_SIZE];

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }

    qsort(num, N, sizeof(int), compare);

    if (N % 2 == 0) {
        printf("%d", num[N / 2 - 1]);
    } else {
        printf("%d", num[N / 2]);
    }

    return 0;
}
