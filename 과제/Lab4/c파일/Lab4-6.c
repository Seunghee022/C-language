//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-03-30
//Lab4-6: 대문자를 소문자로 변환하기
//////////////////////////////////////////////
#include <stdio.h>

int main()
{
    char n;
    printf("문자를 입력: ");
    scanf("%c",&n);
    if (n>=65&&n<=90) //아스키코드에서 65~90은 대문자 알파벳
        printf("소문자 결과: %c\n",n-'A'+'a');  //-'A'+'a'해서 소문자로 변환
    else
        printf("대문자를 입력하시오\n");
}