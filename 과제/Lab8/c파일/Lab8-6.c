//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-04
//Lab8-6: 2개정수를 받아오는 함수만들기(포인터 이용)
//////////////////////////////////////////////
#include <stdio.h>
int get_twoint(int *px,int*py)
{
    int sum=*px+*py; //포인터로 px,py의 값을 가져와서 더함
    return sum;
}
int main()
{
    int sum;
    int a,b;
    printf("2개의 정수를 입력하시오(예: 10 20): ");
    scanf("%d %d",&a,&b);
    sum=get_twoint(&a,&b); //a와 b의 주소를 함수에 넣어줌
    printf("정수의 합은 %d\n",sum);
}