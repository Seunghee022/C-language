//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-03-30
//Lab4-5: (x,y)좌표입력받고 몇사분면인지 출력하기
//////////////////////////////////////////////
#include <stdio.h>

int main()
{
    double x,y;
    printf("좌표(x,y): ");
    scanf("%lf %lf",&x,&y); //double은 lf로 받음
    if (x>0&&y>0) //and 연산자 사용
        printf("1사분면\n");
    else if(x>0 &&y<0)
        printf("4사분면\n");
    else if(x<0&&y>0)
        printf("2사분면\n");
    else
        printf("3사분면\n");
}