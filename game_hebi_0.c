#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

int GetRandom(int,int);
int food();

int cnt,cnt_2 = 'f',kazu = 0,x = 2,y = 2,max_x = 2,food_x,food_y,count = 0,p;
char hebi[5] = {'l','l','l','l','l'},hebi_x[5] = {2,3,4,5,6},hebi_y[5] = {2,2,2,2,2};

int main(void){
    printf("\033[%d;%dH%s",x,y,hebi);
    while(1){
        
        cnt = getch();
        switch (cnt)
        {
        case 'f':
            if (cnt_2 == 'd')
            {
                break;
            }
            printf("\033[%d;%dH ",hebi_y[0],hebi_x[0]);
            x++;
            for (int i = 0; i < 4; i++)
            {
                hebi_x[i] = hebi_x[i + 1];
                hebi_y[i] = hebi_y[i + 1];
            }
            hebi_x[4] = hebi_x[4] + 1;
            printf("\033[%d;%dHl",hebi_y[4],hebi_x[4]);
            break;
        case 'd':
            if (cnt_2 == 'f')
            {
                break;
            }        
            printf("\033[%d;%dH ",hebi_y[0],hebi_x[0]);
            for (int i = 0; i < 4; i++)
            {
                hebi_y[i] = hebi_y[i + 1];
                hebi_x[i] = hebi_x[i + 1];
            }
            hebi_x[4]--;
            printf("\033[%d;%dHl",hebi_y[4],hebi_x[4]);
            break;
        case 's':
            if (cnt_2 == 'a')
            {
                break;
            }
            printf("\033[%d;%dH ",hebi_y[0],hebi_x[0]);
            for (int i = 0; i < 4; i++)
            {
                hebi_y[i] = hebi_y[i + 1];
                hebi_x[i] = hebi_x[i + 1];
            }
            hebi_y[4]++;
            printf("\033[%d;%dHl",hebi_y[4],hebi_x[4]);
            break;
        case 'a':
            if (cnt_2 == 's')
            {
                break;
            }        
            printf("\033[%d;%dH ",hebi_y[0],hebi_x[0]);
            for (int i = 0; i < 4; i++)
            {
                hebi_y[i] = hebi_y[i + 1];
                hebi_x[i] = hebi_x[i + 1];
            }
            hebi_y[4]--;
            printf("\033[%d;%dHl",hebi_y[4],hebi_x[4]);
            break;
        default:
            return 0;
            break;
        }
        cnt_2 = cnt;
    }
    return 0;
}