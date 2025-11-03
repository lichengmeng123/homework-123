//202511716116
//2892862386@qq.com
/李澄萌
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {scanf("%d",&arr[i][j]);}
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        if(j==0)
        {printf("%d",arr[i][j]);}
        else  {printf(" %d",arr[i][j]);}
         printf("\n");
    }
   
    return 0;
    }
