//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-25
//Lab11-4: 배열 병합하는 함수만들기
//////////////////////////////////////////////
#include<stdio.h>
int arraymerge(int *a,int an,int *b,int bn,int *c){
    int n=0;
    for(int i=0;i<an;i++){
        for (int j=0;j<bn;j++){
            if (*(a+i)>=*(b+j)&&*(b+j)!=0){ //b배열에 요소가 더 작고, 정렬이 안되었다면
                *c=*(b+j),c++,n++; //c배열에 b배열의 요소 추가하고 c배열인덱스 증가
                *(b+j)=0; //b배열의 요소 사용했다고 표시
                break;
            }
        }
        *c=*(a+i),c++,n++; //a배열의 요소 c배열에 c추가
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