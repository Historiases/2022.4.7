#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, e;
    printf("请输入圆的圆心坐标：");
    scanf("%f,%f", &a, &b);
    printf("请输入圆的半径：");
    scanf("%f", &c);
    printf("请输入要判断的点的坐标(x,y)：");
    scanf("%f,%f", &d, &e);
    if (pow(d - a, 2) + pow(e - b, 2) < pow(c, 2))
        printf("该点在圆内\n");
    else if (pow(d - a, 2) + pow(e - b, 2) == pow(c, 2))
        printf("该点在圆上\n");
    else
        printf("该点不在圆内\n");

    return 0;




}