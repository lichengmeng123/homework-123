//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
 int main() 
 {
     int arr[5];
     int i;
     printf("请输入当前记录的前4位学号：");
     for (i = 0; i < 4; i++) 
     {
         scanf("%d", &arr[i]);
     }
     for (i = 4; i > 0; i--)
      {
         arr[i] = arr[i - 1];
     }
     arr[0] = 0; 
     for (i = 0; i < 5; i++) 
     {
         if (i > 0) 
         {
             printf(" ");
         }
         printf("%d", arr[i]);
     }
     printf("\n");
     return 0;
 }
