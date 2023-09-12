#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int HP_1 = 10,HP = 10,kougeki_1 = 1,MP_1 = 10,HP_2,hp,kougeki_2,kazu = 0,min_1 = 3,max_1 = 6,min_2 = 1,max_2 = 7;
char name_1[10];

int GetRandom(int min,int max);
int kougeki(void);
int kaihuku(void);
int ribenji(void);
void exit(int status);

int main(void)
{
    srand((unsigned int)time(NULL));

    if(kazu == 0)
    {
        printf("プレイヤーの名前(10文字まで)を入力してください\n");
        scanf("%10s",name_1);
    }
    else if(kazu == 1)
    {
        HP_1 = 10,HP = 10,kougeki_1 = 1,MP_1 = 10,min_1 = 3,max_1 = 6,min_2 = 1,max_2 = 7;
    }

    for (int i = 0; i < 4; i++)
    {
    printf("('')/  < %s\nHP%d,MP%d,武器:剣\n\n",name_1,HP_1,MP_1);
    
    HP_2 = GetRandom(5 + i * 3.5,13 + i * 3.5);
    hp = HP_2;

    printf("\x1b[31mHP:%dの敵があらわれた!\n\n",HP_2);

    while(HP_1 > 0 && HP_2 > 0)
    {
        printf("\x1b[32m%sのターン\n",name_1);
        printf("\x1b[39m攻撃する：１,防御する：２,回復する：３\n");
        scanf("%d",&kazu);
        switch (kazu)
        {
        case 2:
            HP_1 = HP_1 + kougeki_2 - 1;
            printf("防御した！\n\n");
            break;
        case 1:
            kougeki();
            break;
        case 3:
            kaihuku();
            break;

        default:
            printf("逃げられないよ？\n\n");
            break;
        }
        
        if(HP_2 == 0)
        {
            break;
        }
        printf("\x1b[34m敵のターン\n\x1b[39m敵の攻撃\n");
        kougeki_2 = GetRandom(min_2,max_2);
        HP_1 = HP_1 - kougeki_2;
        if (HP_1 < 0)
        {
            HP_1 = 0;
        }
        printf("'%s'に%dの攻撃、%sの残りHP%d\n\n",name_1,kougeki_2,name_1,HP_1);
        if (HP_1 == 0)
        {
            ribenji();
            return 0;
        }
    }
    HP_1 = HP + hp / 4;
    HP = HP_1;
    MP_1 = 10;
    min_1 = min_1 + (kougeki_2 + 1) / 2;
    max_1 = max_1 + (kougeki_2 + 1) / 2;
    min_2 = min_2 + 2;
    max_2 = max_2 + 2;
    printf("\x1b[36mレベルアップ！\n\x1b[39mHPが%dになった！ 攻撃力が上がった！\nHP,MPが回復した!\n\n",HP_1);
    printf("おわる：１,すすむ：２\n");
    scanf("%d",&kazu);
    if(kazu == 1)
    {
        printf("\x1b[35m遊んでくれてありがとう！\x1b[39m\n");
        exit(0);
    }
    else{
        for (int i = 0; i < 3; i++)
        {
            printf(" ('')/\b\b\b\b\b");
            sleep(1);
        }
    }
    }

    printf("\n\n\x1b[31m////ボス戦////\n\nHP:50のボスが現れた！\n");
    HP_2 = 50;

    while(HP_1 > 0 && HP_2 > 0)
    {
        printf("\x1b[32m%sのターン\n",name_1);
        printf("\x1b[39m攻撃する：１,防御する：２,回復する：３\n");
        scanf("%d",&kazu);
        switch (kazu)
        {
        case 2:
            HP_1 = HP_1 + kougeki_2 - 1;
            printf("防御した！\n\n");
            break;
        case 1:
            kougeki();
            if(HP_2 == 0)
            {
            printf("\x1b[33mボス討伐成功！おめでとう！\x1b[39m\n");
            exit(0);
            return 0;
            }
            break;
        case 3:
            kaihuku();
            break;

        default:
            printf("逃げられないよ？\n\n");
            break;
        }

        kazu = GetRandom(1,2);
        sleep(1);
        printf("\x1b[31mボスのターン\n");
        switch(kazu)
        {
        case 1:
            printf("ボス「回復」\n");
            if(HP_2 < 40)
            {
                HP_2 = HP_2 + 10;
            }
            else if(HP_2 <= 50)
            {
                HP_2 = 50;
            }
            printf("ボスのHPが%dになった\n\n",HP_2);
            break;
        case 2:
            printf("ボス「攻撃」\n");
            kougeki_2 = GetRandom(min_2,max_2);
            HP_1 = HP_1 - kougeki_2;
            if (HP_1 < 0)
            {
                HP_1 = 0;
            }
            printf("'%s'に%dの攻撃、%sの残りHP%d\n\n",name_1,kougeki_2,name_1,HP_1);
            if (HP_1 == 0)
            {
                ribenji();
                return 0;
            }
            break;
        default:
            break;
        }
    }
    return 0;
}

int kougeki()
{
    printf("'%s'の攻撃\n",name_1);
    kougeki_1 =GetRandom(min_1,max_1);
    HP_2 = HP_2 - kougeki_1;
    if (HP_2 < 0)
    {
        HP_2 = 0;
    }
    printf("敵に%dのダメージ、敵の残りHP%d\n\n",kougeki_1,HP_2);
    if (HP_2==0)
    { 
        printf("敵が倒れた!\n\x1b[33m'%s'の勝利!\n\n",name_1);
    }
    return 0;
}

int kaihuku()
{
    if(MP_1 == 0)
    {
        printf("MPが足りず、回復できません\n攻撃：１防御：２\n");
        scanf("%d",&kazu);
        if(kazu == 1)
        {
            kougeki();
        }
        else if(kazu == 2)
        {
            HP_1 = HP_1 + kougeki_2 - 1;
            printf("防御した！\n\n");   
        }
        else{
            printf("逃げられないよ？\n\n");
        }
    }
    else{
        HP_1 = HP;
        MP_1 = MP_1 - 2;
        printf("HPが回復し、%dになりました\nMPを2消費,残りMP:%d\n\n",HP_1,MP_1);
    }
    return 0;
}

int ribenji()
{
    printf("\x1b[31m'%s'がやられてしまった!\nGAME OVER\n\n",name_1);
    printf("\x1b[39mリベンジする？\nする:1,しない:2\n");
    scanf("%d",&kazu);
    if (kazu == 1)
    {
        main();
    }
    else if(kazu == 2)
    {
        printf("\x1b[35m遊んでくれてありがとう！\x1b[39m\n");
        return 0;
    }
    else{
        printf("じゃあもう一回遊んでね\n");
        kazu = 1;
        main();
    }
    return 0;
}

int GetRandom(int min,int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}