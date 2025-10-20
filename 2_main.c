//202511716116
//2892862386@qq.com
//李澄萌
#include <stdio.h>
int main(){
    int score;
    printf("请输入学生的整数成绩（0-100）");
    scanf("%d",&score);  

    if(score>=80 && score<=100)
    {
        printf("A");
    }else if (score>=80 && score <=89){
        printf("B");
    }else if (score>=70 && score <=79){
        printf("C");
    }else if (score>=60 && score <=69){
        printf("D");
    }else if (score>=0 && score<60){
        printf("E");
    }

    return 0;

}
