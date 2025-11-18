//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>

void incrementArr(int *ptr, int len) {
    for (int i = 0; i < len; i++) {
        *(ptr + i) += 1; 
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    incrementArr(arr, 5); 
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
