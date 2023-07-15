#include<stdio.h>
int main (void)
{
    int nenri,shoki,jogen,toshi;

    printf("年利(％)");
    scanf("%d",&nenri);

    printf("初期値、上限値");
    scanf("%d,%d",&shoki,&jogen);

    toshi=0;

    while (shoki < jogen)
    {
        shoki=shoki*nenri/100+shoki;
        toshi++;
    }

    printf("かかった年:%d",toshi);

    
    return 0;
}