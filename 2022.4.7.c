#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, e;
    printf("������Բ��Բ�����꣺");
    scanf("%f,%f", &a, &b);
    printf("������Բ�İ뾶��");
    scanf("%f", &c);
    printf("������Ҫ�жϵĵ������(x,y)��");
    scanf("%f,%f", &d, &e);
    if (pow(d - a, 2) + pow(e - b, 2) < pow(c, 2))
        printf("�õ���Բ��\n");
    else if (pow(d - a, 2) + pow(e - b, 2) == pow(c, 2))
        printf("�õ���Բ��\n");
    else
        printf("�õ㲻��Բ��\n");

    return 0;




}