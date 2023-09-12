#include<stdio.h>
#include<conio.h>
#include<unistd.h>

int main(void)
{
    int cnt,n,m,x = 10,y = 17;
    printf("\033[%d;%dH右に進む：F,左に進む：D,下に進む：S,上に進む：A",13,0);
    sleep(3);
    for(int i = 0; i < 20; i++)
    {
        printf("\033[%d;%dH■",14,i);
        for (int j = 15; j < 22; j++)
        {
            printf("\033[%d;%dH ",j,i);
        }
        printf("\033[%d;%dH■",22,i);
    }

    for (int i = 0; i < 9; i++)
    {
        n = 14 + i;
        m = 14 + i;
        printf("\033[%d;%dH■",n,0);
        printf("\033[%d;%dH■",m,20);
    }

    while(x >= 1 && x < 20 && y >= 15 && y < 22){
        cnt = getch();

        switch (cnt)
        {
        case 'f':
            printf("\033[%d;%dH  ",y,x);
            x++;
            printf("\033[%d;%dHl",y,x);
            break;
        case 'd':
            printf("\033[%d;%dH  ",y,x);
            x--;
            printf("\033[%d;%dHl",y,x);
            break;
        case 's':
            printf("\033[%d;%dH  ",y,x);
            y++;
            printf("\033[%d;%dHl",y,x);
            break;
        case 'a':
            printf("\033[%d;%dH  ",y,x);
            y--;
            printf("\033[%d;%dHl",y,x);
            break;
        default:
            return 0;
            break;
        }
    }
    return 0;
}