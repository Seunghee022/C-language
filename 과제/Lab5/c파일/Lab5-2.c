//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-06
//Lab5-2: 메뉴주고 산술계산기(무한루프사용)
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    char op;
    int x,y;
    printf("**********************\n");
    printf("A----Add\n");
    printf("S----Subtract\n");
    printf("M----Multiply\n");
    printf("D----Divide\n");
    printf("Q----Quit\n");
    printf("**********************\n");   
    do
    {
        printf("연산을 선택하시오: ");  //op받기
        scanf(" %c",&op);
        if (op=='Q')   //Q일때 무한루프 빠져나가기
            break;
        else if(op!='M'&&op!='A'&&op!='S'&&op!='D')  //다른문자일때 계속반복하기
            continue;
        else
        {
            printf("두수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d",&x,&y);
            switch(op)    //switch문으로 산술계산기
            {
                case 'M':
                    printf("%d\n",x*y);
                    break;
                case 'A':
                    printf("%d\n",x+y);
                    break;
                case 'S':
                    printf("%d\n",x-y);
                    break;
                case 'D':
                    printf("%d\n",x/y);
                    break;               
            }
            break;
        }
    } while (1);   
}