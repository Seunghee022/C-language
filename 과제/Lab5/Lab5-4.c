//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-06
//Lab5-4: 거듭제곱값 계산하기
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    double result=1.0;
    double r;
    int n;

    printf("실수의 값을 입력하시오: ");
    scanf("%lf",&r);
    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d",&n);

    for (int i=0;i<n;i++)  //n만큼 곱셈 반복
        result*=r;
    printf("결과값은 %lf\n",result);
}