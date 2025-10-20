//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>

int main(){
    int a,b;
    double result;
    char c;//存储运算符（+，—，*，/）
    printf("请输入运算两个整数和一个运算符(格式:a b 运算符）:");
    scanf("%d %d %c",&a,&b,&c);
    switch (c){
        case'+':
        printf("%d\n",a + b);
        break;
        case'-':
        printf("%d\n",a - b);
        break;
        case'*':
        printf("%d\n",a * b);
        break;
        case'/':
        if(b==0)
        printf("除数不能是零\n");
        else
        printf("%d\n",a / b);
        break;
    default:
         printf("输入有误！\n");
    }

    return 0;
}
