#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

int GetRandom(int,int);
int food();

int cnt,x = 2,y = 2,food_x,food_y,count = 0;
char hebi[50] = {'l'},hebi_x[50] = {2},hebi_y[50] = {2};

int main(void){
    srand((unsigned int)time(NULL));
    
    printf("\033[%d;%dH<右に進む：F,左に進む：D,下に進む：S,上に進む：A>",1,22);
    sleep(3);
    for(int i = 1; i <= 20; i++)
    {
        printf("\033[%d;%dH■",1,i);
        for (int j = 2; j < 10; j++)
        {
            printf("\033[%d;%dH ",j,i);
        }
        printf("\033[%d;%dH■",10,i);
    }

    for (int i = 1; i < 10; i++)
    {
        printf("\033[%d;%dH■",i,0);
        printf("\033[%d;%dH■",i,20);
    }

    printf("\033[%d;%dH%s",y,x,hebi);
    food();
    while(x >= 2 && x < 20 && y >= 2 && y < 9){
        cnt = getch();

        switch (cnt)
        {
        case 'f':
            while(_kbhit() == 0 )
            {
                if(hebi_x[count] >= 19)
                {
                    return 0;
                }
                if (hebi_x[count] == food_x && hebi_y[count] == food_y)
                {
                    food();
                    count++;
                    hebi_x[count] = hebi_x[count - 1] + 1;
                    hebi_y[count] = hebi_y[count - 1];
                }
                printf("\033[%d;%dH ",hebi_y[0],hebi_x[0]);
                for (int i = 0; i < count; i++)
                {
                    hebi_x[i] = hebi_x[i + 1];
                    hebi_y[i] = hebi_y[i + 1];
                }
                hebi_x[count] = hebi_x[count] + 1;
                printf("\033[%d;%dHl",hebi_y[count],hebi_x[count]);
                sleep(1);
            }
            break;
        case 'd':
            while(_kbhit() == 0)
            {
                if (hebi_x[0] <= 2)
                {
                    return 0;
                } 
                if (hebi_x[0] == food_x && hebi_y[0] == food_y)
                {
                    food();
                    count++;
                    hebi_x[count] = hebi_x[count - 1] - 1;
                    hebi_y[count] = hebi_y[count - 1];
                }        
                printf("\033[%d;%dH ",hebi_y[0],hebi_x[0]);
                for (int i = 0; i < count; i++)
                {
                    hebi_y[i] = hebi_y[i + 1];
                    hebi_x[i] = hebi_x[i + 1];
                }
                hebi_x[count]--;
                printf("\033[%d;%dHl",hebi_y[count],hebi_x[count]);
                sleep(1);
            }
            break;
        case 's':
            while(_kbhit() == 0)
            {
                if (hebi_y[count] > 8)
                {
                    return 0;
                }
                if (hebi_x[count] == food_x && hebi_y[count] == food_y)
                {
                    food();
                    count++;
                    hebi_x[count] = hebi_x[count - 1];
                    hebi_y[count] = hebi_y[count - 1] + 1;
                }                
                printf("\033[%d;%dH ",hebi_y[0],hebi_x[0]);
                for (int i = 0; i < count; i++)
                {
                    hebi_y[i] = hebi_y[i + 1];
                    hebi_x[i] = hebi_x[i + 1];
                }
                hebi_y[count]++;
                printf("\033[%d;%dHl",hebi_y[count],hebi_x[count]);
                sleep(1);
            }
            break;
        case 'a':
            while(_kbhit() == 0){
                if (hebi_y[0] <= 2)
                {
                    return 0;
                }
                if (hebi_x[count] == food_x && hebi_y[count] == food_y)
                {
                    food();
                    count++;
                    hebi_x[count] = hebi_x[count - 1];
                    hebi_y[count] = hebi_y[count - 1] - 1;
                }       
                printf("\033[%d;%dH ",hebi_y[0],hebi_x[0]);
                for (int i = 0; i < count; i++)
                {
                    hebi_y[i] = hebi_y[i + 1];
                    hebi_x[i] = hebi_x[i + 1];
                }
                hebi_y[count]--;
                printf("\033[%d;%dHl",hebi_y[count],hebi_x[count]);
                sleep(1);
            }
            break;
        default:
            return 0;
            break;
        }
        printf("\033[%d;%dH*",food_y,food_x);
    }

    return 0;
}

int food()
{
    food_x = GetRandom(2,19);
    food_y = GetRandom(2,9);
    printf("\033[%d;%dH*",food_y,food_x);
    return 0;
}

int GetRandom(int min,int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}