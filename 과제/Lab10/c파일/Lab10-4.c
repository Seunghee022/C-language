//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-18
//Lab10-4: ���� �߽� ����ü
//////////////////////////////////////////////
#include <stdio.h>
#define PI 3.14    //pi�� ����
struct point{    //���� �߽� ����ü
    int x,y;
};
typedef struct circle{   //point�� ������ ���� ����ü
    struct point center;
    double radius;
}CIRCLE;
double area(struct circle c){
    return PI*c.radius*c.radius;  //���� ���� �Լ�
}
double perimeter(struct circle c){
    return 2*PI*c.radius;  //���� �ѷ� �Լ�
}
int main(){
    CIRCLE c;
    printf("���� �߽���: ");
    scanf("%d %d",&c.center.x,&c.center.y);  //���߱���ü�� "."�� �ι��ʿ���
    printf("���� ������: ");
    scanf("%lf",&c.radius);
    printf("���� ����=%lf\n",area(c));
    printf("���� �ѷ�=%lf\n",perimeter(c));
}