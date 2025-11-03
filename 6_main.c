//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
long long calculateSum(int arr[], int length) {
    long long sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

long long calculateProduct(int arr[], int length) {
    long long product = 1;
    for (int i = 0; i < length; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = calculateSum(arr, 5);
    long long product = calculateProduct(arr, 5);

    printf("%lld %lld\n", sum, product);

    return 0;
}

 
