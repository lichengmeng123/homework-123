//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int *p = &a;
    *p += 10; 
    printf("%d,%d\n", a, *p);
    return 0;
}
