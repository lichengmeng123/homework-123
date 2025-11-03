//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
 {
    int numbers[10];

    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
    }
    bubbleSort(numbers, 10);

    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
