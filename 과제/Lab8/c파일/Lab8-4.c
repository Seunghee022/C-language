//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-04
//Lab8-4: 배열에서의 최솟값과 인덱스 찾기
//////////////////////////////////////////////
#include <stdio.h>
int main()
{
    double a[]={8.2,7.3,1.5,3.7,4.5,3.9,9.2};
    double *p=a;
    double min=*p;
    int index;
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
        if (*(p+i)<min)
            min=*(p+i),index=i;  //포인터로 min값 찾기,min 인덱스 저장

    printf("최솟값의 첨자는 %d, 값은 %.1lf\n",index,min);
}