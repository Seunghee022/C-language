//////////////////////////////////////////////
//�ۼ���: �����(2113783)
//�ۼ���: 2023-05-11
//Lab9-2: int str_chr(char *s,int c)�Լ� ���� ������ �󵵰��
//////////////////////////////////////////////
#include <stdio.h>
int str_chr(char *s,int c){   //s���ڿ����� (char)c�� ���ڰ� ������Դ���
    int cnt=0;
    for(int i=0;s[i];i++)
        if (s[i]==(char)c)
            cnt++;
    return cnt;
}
int main(){
    char c[100]="";
    printf("���ڿ��� �Է��Ͻÿ�: ");
    fgets(c,sizeof(c),stdin); 
    for(int i='a';i<='z';i++)  //a~z���� for�����鼭 ����Ȯ��
       printf("%c =%d\n",i,str_chr(c,i)); 
}