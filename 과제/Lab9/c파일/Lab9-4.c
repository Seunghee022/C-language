//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-11
//Lab9-4: ȸ���˻� (�ҹ��ڷ� ����)
//////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[]=" ";
    printf("���ڿ��� �Է��Ͻÿ�: ");
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++)  //�ҹ��ڷ� �ٲٱ�
        a[i]=tolower(a[i]);
    int check=1;  //ȸ���϶� flag��
    for (int i=0;i<len/2;i++){
        if (!(a[i]==a[len-1-i]))  // ȸ���϶�
            check=1;
        else  //�ƴҶ�
            check=0;
    }
    if (check==1)
        printf("ȸ���Դϴ�.\n");
    else
        printf("ȸ���� �ƴմϴ�.\n");
}