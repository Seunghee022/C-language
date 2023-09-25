//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-20
//Lab6-2: 정수가 몇자리수인지
//////////////////////////////////////////////
#include <stdio.h>
int number(int n)
{
    static int cnt=0;  //정적지역변수/ 자리수의 개수
    if(n==0)
        return cnt;  
    else
    {
        cnt++;
        return number(n/10);  //10로나눈값을 순환
    }
}
int main()
{
    int k;
    printf("정수를 입력하시오: ");
    scanf("%d",&k);
    printf("자리수의 개수: %d\n",number(k));
}