#include <stdio.h>
int main(void)
{
    int num;
    printf("�ԍ�����͂��Ă��������B\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("1��:�r��");
        break;
        case 2:
        printf("�Q��:�_��?");
        break;
        case 3:
        printf("�R��:��");
        break;
        default:
        printf("���Ȃ�");
        break;
    }
    return 0;
}