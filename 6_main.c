//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i); 
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    free(ptr); 
    ptr = NULL; 
    return 0;
}

 
