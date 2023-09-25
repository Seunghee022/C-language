int main()
{
    char a,b,c,d;
    unsigned int n=0;
    printf("첫번째 문자를 입력하시오.:");
    scanf("%c",&a);

    printf("두번째 문자를 입력하시오.:");
    scanf("%c",&b);

    printf("세번째 문자를 입력하시오.:");
    scanf("%c",&c);

    printf("네번째 문자를 입력하시오.:");
    scanf("%c",&d);

    n=(d<<24) | (c<<16) | (b<<8)|a|n;

    printf("결과값:%x\n",n);
}