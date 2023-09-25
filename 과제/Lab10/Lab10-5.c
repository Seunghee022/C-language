//////////////////////////////////////////////
//작성자: 백승희(2113783)
//작성일: 2023-05-18
//Lab10-5: 직원 구조체 2
//////////////////////////////////////////////
#include <stdio.h>
typedef struct employee{  //직원정보 구조체 typedef로
    int number;
    char name[20];
    char pnumber[20];
    int age;
}EM;
int main(){
    //typedef로 별칭이 EM이 됨
    EM n[10]={
        {1123,"홍길동1","010-1234-1111",20},
        {2345,"홍길동2","010-1234-2345",25},
        {1223,"홍길동3","010-3333-4444",32},
        {1221,"홍길동4","010-2312-3333",35},
        {2211,"홍길동5","010-5443-1232",41},
        {2111,"홍길동6","010-9944-1111",31},
        {1199,"홍길동7","010-3343-2211",43},
        {1345,"홍길동8","010-1234-1345",23},
        {4535,"홍길동9","010-1234-4535",29}
    };
    for(int i=0;i<10;i++){   //EM배열의 구조체를 하나씩 접근
        if (n[i].age>=20 && n[i].age<=30)    //i번째의 구조체에서 나이 확인
            printf("사번=%d 이름=%s 전화번호=%s 나이=%d\n",
            n[i].number,n[i].name,n[i].pnumber,n[i].age);
    }
}