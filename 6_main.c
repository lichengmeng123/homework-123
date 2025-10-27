//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
 int main() 
 {
     int arr[5];
     int i, num;
     printf("请输入数字：\n");
     for (i = 0; i < 5; i++)
      {
         while (1) 
         {
             scanf("%d", &num);
             if (num % 2 == 0)
              { 
                arr[i] = num;
                 break; 
             }
         }
     }
     
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
