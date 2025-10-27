//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
 int main()
 {
     int arr[5]; 
     int i, sum = 0;
     printf("请输入数组前四位：");
     for (i = 0; i < 4; i++)
      {
         scanf("%d", &arr[i]);
         sum += arr[i];
        }
     arr[4] = sum; 
     for (i = 0; i < 5; i++)
      {
         if (i > 0) {
             printf(" ");
         }
         printf("%d", arr[i]);
     }
     printf("\n");
     return 0;
 }
