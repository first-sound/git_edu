#include <stdio.h>
int main(void)
{
    int num;
    printf("番号を入力してください。\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("1番:荒木");
        break;
        case 2:
        printf("２番:濱家?");
        break;
        case 3:
        printf("３番:東");
        break;
        default:
        printf("いない");
        break;
    }
    return 0;
}