//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-18
//Lab10-3: 2���� ��鿡�� �� ��ǥ ����ü
//////////////////////////////////////////////
#include <stdio.h>
struct point{    //2������� ����ü
    int x,y;
};
int equals(struct point *p1,struct point *p2){  
    //�����͸� �̿��ؼ� ��ǥ�� ������ Ȯ��
    if (p1->x==p2->x && p1->y==p2->y)
        return 1;
    else
        return 0;
}
int main(){
    struct point s1={3,5};
    struct point s2={2,5};
    if (equals(&s1,&s2)==1)  //equals�Լ��� ����ü�� �ּҰ��� �־���
        printf("(%d,%d)==(%d,%d)\n",s1.x,s1.y,s2.x,s2.y);
    else    
        printf("(%d,%d)!=(%d,%d)\n",s1.x,s1.y,s2.x,s2.y);
}