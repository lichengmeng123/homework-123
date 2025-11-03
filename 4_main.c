//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    long long sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum += power(i, 2);
    }

    printf("%lld\n", sum);

    return 0;
}
