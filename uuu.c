#include<stdio.h>
int main(void)
{
    //�ʐς̌v�Z
    int zukei;
    double tehen,takasa,tate,yoko,ue,shita,r,kaku;

    printf("�}�`�̎��");
    scanf("%d",&zukei);

    switch (zukei)
    {
    case 1:
    printf("��ӁA���������");
    scanf("%lf,%lf",&tehen,&takasa);
    printf("�ʐρF%f",tehen*takasa/2);
    break;

    case 2:
    printf("�c�A�������");
    scanf("%lf,%lf",&tate,&yoko);
    printf("�ʐρF%f",tate*yoko);
    break;

    case 3:
    printf("���A����A���������");
    scanf("%lf,%lf,%lf",&ue,&shita,&takasa);
    printf("�ʐρF%f",(ue+shita)*takasa/2);
    break;

    case 4:
    printf("��ӁA���������");
    scanf("%lf,%lf",&tehen,&takasa);
    printf("�ʐρF%f",tehen*takasa);
    break;

    case 5:
    printf("���a�����");
    scanf("%lf",&r);
    printf("�ʐρF%f",r*r*3.14);
    break;

    case 6:
    printf("���a�A���S�p�����");
    scanf("%lf,%lf",&r,&kaku);
    printf("�ʐρF%f",r*r*3.14*kaku/360);
    break;

    default:
    printf("no\n");
    break;

    }
    return 0;
}