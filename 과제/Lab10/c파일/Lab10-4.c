//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-18
//Lab10-4: 원의 중심 구조체
//////////////////////////////////////////////
#include <stdio.h>
#define PI 3.14    //pi값 정의
struct point{    //원의 중심 구조체
    int x,y;
};
typedef struct circle{   //point를 포함한 이중 구조체
    struct point center;
    double radius;
}CIRCLE;
double area(struct circle c){
    return PI*c.radius*c.radius;  //원의 넓이 함수
}
double perimeter(struct circle c){
    return 2*PI*c.radius;  //원의 둘레 함수
}
int main(){
    CIRCLE c;
    printf("원의 중심점: ");
    scanf("%d %d",&c.center.x,&c.center.y);  //이중구조체를 "."이 두번필요함
    printf("원의 반지름: ");
    scanf("%lf",&c.radius);
    printf("원의 면적=%lf\n",area(c));
    printf("원의 둘레=%lf\n",perimeter(c));
}