//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-03-30
//Lab4-3: 몇월인지 영어로 출력하기
//////////////////////////////////////////////
#include <stdio.h>

int main()
{
    int n;
    printf("월번호를 입력하시오: ");
    scanf("%d",&n);
    switch(n)  //스위치문으로 1~12까지 case분류
    {
        case 1:
            printf("Jan\n");
            break;
        case 2:
            printf("Feb\n");
            break;
        case 3:
            printf("Mar\n");
            break;
        case 4:
            printf("Apr\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("Jun\n");
            break;
        case 7:
            printf("Jul\n");
            break;
        case 8:
            printf("Aug\n");
            break;
        case 9:
            printf("Sep\n");
            break;
        case 10:
            printf("Oct\n");
            break;
        case 11:
            printf("Nov\n");
            break;
        case 12:
            printf("Dec\n");
            break;
    }

}