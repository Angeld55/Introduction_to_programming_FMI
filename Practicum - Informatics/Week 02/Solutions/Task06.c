#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < 4; i++) {
        if (!((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) ||
            (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))) {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}
