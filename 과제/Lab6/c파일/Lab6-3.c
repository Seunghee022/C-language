//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-20
//Lab6-3: 피보나치수열계산
//////////////////////////////////////////////
#include <stdio.h>
int fib(int n)
{
    if (n==0)  //0일때 0
        return 0;
    else if (n==1)  //1일때 1
        return 1;
    else      //그외에
        return fib(n-1)+fib(n-2);   //전과 그전 수 더하기
}
int main()
{
    for (int i=0;i<10;i++)
        printf("fib(%d)=%d\n",i,fib(i));
}