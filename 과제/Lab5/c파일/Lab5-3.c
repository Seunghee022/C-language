//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-06
//Lab5-3: 가로 막대그래프그리기(무한루프사용)
//////////////////////////////////////////////
#include <stdio.h>
int main() 
{
    int n;
    while(1)
    {
        printf("막대의 높이(종료:-1): ");
        scanf("%d",&n);
        if (n==-1)   //-1일때 종료
            break;
        for (int i=0;i<n;i++)   //n의 개수만큼 반복해서 *그리기
            printf("*");
        printf("\n");
    }
}