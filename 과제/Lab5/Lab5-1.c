//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-06
//Lab5-1: 1~100사이의 3의배수의 합
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    int i=1;
    int sum=0;
    for(i;i<=100;i++)
    {
        if (i%3==0)   //3의 배수 검사
            sum+=i;
    }
    printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n",sum);
}