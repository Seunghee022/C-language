//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-03-23
//Lab3-6: 비트이동연산이용해서 unsigned int에 저장하기
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    char a,b,c,d;
    unsigned int n=0;
    printf("첫번째 문자를 입력하시오.:");
    scanf("%c",&a);
    printf("두번째 문자를 입력하시오.:");
    scanf(" %c",&b);  // \n때문에 맨앞에 공백 만들기
    printf("세번째 문자를 입력하시오.:");
    scanf(" %c",&c);
    printf("네번째 문자를 입력하시오.:");
    scanf(" %c",&d);

    n=(d<<24) | (c<<16) | (b<<8)|a|n;  // 8칸씩 밀어야하므로 8,16,24만큼씩 밀고 OR연산

    printf("결과값:%x\n",n); //%x 16진수출력
}