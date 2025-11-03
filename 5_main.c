//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
long long calculateArithmeticSum(int a1, int an, int step) {
    if (step == 0) {
        return 0;
    }
    int n = ((an - a1) / step) + 1;
    return (long long)n * (a1 + an) / 2;
}

int main() {
    long long total = calculateArithmeticSum(1, 100, 1);
    
    printf("%lld\n", total);

    return 0;
}
