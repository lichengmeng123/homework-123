//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
 int main()
 {
     int n, i = 2, is_prime = 1; 
     printf("请输入小于50的正整数密钥：");
     scanf("%d", &n);
     while(i < n) 
     {
         if (n % i == 0) 
         {
             is_prime = 0;
             break; 
         }
         i++;
     }
     if (n == 1)
      {
         printf("密钥不安全，请重新输入\n");
     } else if (is_prime == 1) 
     {
         printf("密钥安全，密码设置成功\n");
     } else
      {
         printf("密钥不安全，请重新输入\n");
     }
     return 0;
 }
