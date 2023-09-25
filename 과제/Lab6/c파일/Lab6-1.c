//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-20
//Lab6-1: 주사위 각각면이 몇변나왔는지
//////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int get_dice_face()
{
    static int cnt=0;  //함수 호출 횟수
    static int a=0;  //1가 나온 횟수
    static int b=0;  //2가 나온 횟수
    static int c=0;  //3이 나온 횟수
    static int d=0;  //4가 나온 횟수
    static int e=0;  //5가 나온 횟수
    static int f=0;  //6이 나온 횟수
    cnt++;   
    int number=rand()%6+1;  //난수생성
    switch(number)
    {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        case 6:
            f++;
            break;
    }
    if (cnt==100)  //호출횟수가 100일때 출력
    {
        printf("1->%d\n",a);
        printf("2->%d\n",b);
        printf("3->%d\n",c);
        printf("4->%d\n",d);
        printf("5->%d\n",e);
        printf("6->%d\n",f);
    }
}
int main()
{
    for (int i=0;i<100;i++)
        get_dice_face();
}