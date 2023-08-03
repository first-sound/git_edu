#include<stdio.h>
int main(void)
{
    //面積の計算
    int zukei;
    double tehen,takasa,tate,yoko,ue,shita,r,kaku;

    printf("図形の種類");
    scanf("%d",&zukei);

    switch (zukei)
    {
    case 1:
    printf("底辺、高さを入力");
    scanf("%lf,%lf",&tehen,&takasa);
    printf("面積：%f",tehen*takasa/2);
    break;

    case 2:
    printf("縦、横を入力");
    scanf("%lf,%lf",&tate,&yoko);
    printf("面積：%f",tate*yoko);
    break;

    case 3:
    printf("上底、下底、高さを入力");
    scanf("%lf,%lf,%lf",&ue,&shita,&takasa);
    printf("面積：%f",(ue+shita)*takasa/2);
    break;

    case 4:
    printf("底辺、高さを入力");
    scanf("%lf,%lf",&tehen,&takasa);
    printf("面積：%f",tehen*takasa);
    break;

    case 5:
    printf("半径を入力");
    scanf("%lf",&r);
    printf("面積：%f",r*r*3.14);
    break;

    case 6:
    printf("半径、中心角を入力");
    scanf("%lf,%lf",&r,&kaku);
    printf("面積：%f",r*r*3.14*kaku/360);
    break;

    default:
    printf("no\n");
    break;

    }
    return 0;
}