//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-04-27
//Lab7-1: 배열에 난수 저장 후 최댓값,최솟값
//////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n[10];
    int min,max;
    for (int i=0;i<10;i++)
        n[i]=rand();  //난수 생성
    min=n[0];  //최소값,최대값 첫번째 요소로
    max=n[0];
    for (int i=1;i<10;i++)
    {
        if (n[i]<min)   //n[i]가 min보다 작으면 n[i]가 min
            min=n[i];
        if (n[i]>max)   //n[i]가 max보다 크면 n[i]가 max
            max=n[i];
    }
    printf("최댓값은 %d\n",max);
    printf("최솟값은 %d\n",min);
}