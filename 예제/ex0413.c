#include <stdio.h>
#include "ex0413.h"

int main()
{
    int menu,x,y,rs;
    while(1)
    {
        printMenu();//메뉴출력 
        printf("메뉴입력: ");//메뉴입력
        menu=get_integer();
        if (menu==0) break;
        
        //두개의 정수 입력
        printf("정수1 입력:");
        x=get_integer();
        printf("정수2 입력:");
        y=get_integer();
        //실행 (switch)
        rs=exec(menu,x,y);
        printf("%d\n",rs);
    }
    return 0;
}