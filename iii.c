#include<stdio.h>
int main (void)
{
    int nenri,shoki,jogen,toshi;

    printf("�N��(��)");
    scanf("%d",&nenri);

    printf("�����l�A����l");
    scanf("%d,%d",&shoki,&jogen);

    toshi=0;

    while (shoki < jogen)
    {
        shoki=shoki*nenri/100+shoki;
        toshi++;
    }

    printf("���������N:%d",toshi);

    
    return 0;
}