//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>

int main(){
    int a,b,c;//存储三条线段的长度
    printf("请输入三个整数,代表三条线段长度:");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        printf("可以组成三角形\n");
    }else{
        printf("不能组成三角形\n");
    }
    return 0;
}
