//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-25
//Lab11-4: �迭 �����ϴ� �Լ������
//////////////////////////////////////////////
#include<stdio.h>
int arraymerge(int *a,int an,int *b,int bn,int *c){
    int n=0;
    for(int i=0;i<an;i++){
        for (int j=0;j<bn;j++){
            if (*(a+i)>=*(b+j)&&*(b+j)!=0){ //b�迭�� ��Ұ� �� �۰�, ������ �ȵǾ��ٸ�
                *c=*(b+j),c++,n++; //c�迭�� b�迭�� ��� �߰��ϰ� c�迭�ε��� ����
                *(b+j)=0; //b�迭�� ��� ����ߴٰ� ǥ��
                break;
            }
        }
        *c=*(a+i),c++,n++; //a�迭�� ��� c�迭�� c�߰�
    }
    return n;
}
void printArray(int *arr,int n){
    for (int i=0;i<n;i++)
        printf("%d ",*(arr+i));
    printf("\n");
}
int main(){
    int a[]={1,2,5,7,9,14};
    int b[]={2,3,6,8,13};
    int c[20]={0};
    int n=arraymerge(a,sizeof(a)/sizeof(a[0]),b,sizeof(b)/sizeof(b[0]),c);
    printArray(c,n);
}