//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-25
//Lab11-5: 행렬의 곱
//////////////////////////////////////////////
#include <stdio.h>
double multiply(double (*a)[3],int an,double (*b)[2],int bn,double (*c)[2]){
    for (int i=0;i<an;i++)
        for (int j=0;j<bn;j++)
            for(int k=0;k<an;k++)
                c[i][j]+=a[i][k]*b[k][j];  //행렬곱을 c배열에 대입
}
double display(double (*c)[2],int n,int k){ //배열프린트하는 함수
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++)
            printf("%.1lf  ",c[i][j]);
        printf("\n");
    }
}
int main(){
    double a[3][3]={{4.2,4.3,3.8},{3.7,1.5,0.7},{1.5,3.6,0.0}};
    double b[3][2]={{5.2,2.1},{3.2,1.4},{0.0,0.0}};
    double c[3][2];
    multiply(a,sizeof(a)/sizeof(a[0]),b,sizeof(b[0])/sizeof(b[0][0]),c);
    display(c,sizeof(c)/sizeof(c[0]),sizeof(c[0])/sizeof(c[0][0]));
}