//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>

void bubbleSort(int *ptr, int len) {
    for (int i = 0; i < len - 1; i++) { 
        for (int j = 0; j < len - 1 - i; j++) { 
            if (*(ptr + j) > *(ptr + j + 1)) { 
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
