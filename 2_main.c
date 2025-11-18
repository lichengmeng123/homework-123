//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int *p = arr; 
    for (int i = 0; i < 5; i++) {
        *(p + i) *= 2;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}
