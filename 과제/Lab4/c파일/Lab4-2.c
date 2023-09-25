//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-03-30
//Lab4-2: 가위바위보 이겼는지 비겼는지 졌는지
//////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,computer;
    printf("선택하시오(1:가위 2:바위 3:보): ");
    scanf("%d",&a);
    computer=(rand()%3+1);  //난수발생시켜서 컴퓨터의 선택으로 
    printf("컴퓨터: %d, 사용자: %d ",computer,a);
    if (a==1)
    {
        if(computer==2) //컴:바위 ,사용자:가위
            printf(">> 컴퓨터가 이겼음\n");
        else if(computer==3) //컴:보 ,사용자:가위
            printf(">> 사용자가 이겼음\n");
        else  //컴:가위, 사용자:가위
            printf(">> 비겼음\n");
    }
    else if(a==2)
    {
        if(computer==1) //컴:가위, 사용자:바위
            printf(">> 사용자가 이겼음\n");
        else if(computer==3) //컴:보, 사용자:바위
            printf(">> 컴퓨터가 이겼음\n");
        else //컴:바위, 사용자:바위
            printf(">> 비겼음\n");
    }
    else
    {
        if (computer==1) //컴:가위 ,사용자:보
            printf(">> 컴퓨터가 이겼음\n");
        else if(computer==2) //컴:바위 ,사용자:보
            printf(">> 사용자가 이겼음\n");
        else  //컴:보 ,사용자:보
            printf(">> 비겼음\n");
    }
}