//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-18
//Lab10-3: 2차원 평면에서 점 좌표 구조체
//////////////////////////////////////////////
#include <stdio.h>
struct point{    //2차원평면 구조체
    int x,y;
};
int equals(struct point *p1,struct point *p2){  
    //포인터를 이용해서 좌표가 같은지 확인
    if (p1->x==p2->x && p1->y==p2->y)
        return 1;
    else
        return 0;
}
int main(){
    struct point s1={3,5};
    struct point s2={2,5};
    if (equals(&s1,&s2)==1)  //equals함수에 구조체의 주소값을 넣어줌
        printf("(%d,%d)==(%d,%d)\n",s1.x,s1.y,s2.x,s2.y);
    else    
        printf("(%d,%d)!=(%d,%d)\n",s1.x,s1.y,s2.x,s2.y);
}