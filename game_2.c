#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

int HP_1 = 10,HP = 10,kougeki_1 = 1,MP_1 = 10,
    HP_2,hp,kougeki_2,
    kazu = 0,min_1 = 3,max_1 = 6,min_2 = 1,max_2 = 7,
    i = 0,x = 61,y = 11,mapp = 0;
char name_1[10];

int GetRandom(int min,int max);
int map(void);
int kougeki(void);
int kaihuku(void);
int ribenji(void);
int boss_sen();
void exit(int status);

int main(void)
{
    srand((unsigned int)time(NULL));

    if(kazu == 0)
    {
        printf("�v���C���[�̖��O(10�����܂�)����͂��Ă�������\n");
        scanf("%10s",name_1);
    }
    else if(kazu == 1)
    {
        HP_1 = 10,HP = 10,kougeki_1 = 1,MP_1 = 10,min_1 = 3,max_1 = 6,min_2 = 1,max_2 = 7,x = 61,y = 11,i = 0;
    }

    while(1){
    map();

    printf("\033[%d;%dH%s:HP%d,MP%d,����:��\n\n",4,0,name_1,HP_1,MP_1);
    
    HP_2 = GetRandom(5 + i * 3.5,13 + i * 3.5);
    hp = HP_2;
    i++;

    printf("\x1b[31mHP:%d�̓G�������ꂽ!\n\n\x1b[39m",HP_2);

    printf("\033[%d;%dH'%s':HP%d  �G:HP%d          \n",14,60,name_1,HP_1,HP_2);

    while(HP_1 > 0 && HP_2 > 0)
    {
        printf("\033[%d;%dH\x1b[32m%s�̃^�[��\n",8,0,name_1);

        if(kazu != 0)
        {
            for(int i = 0; i < 60; i++)
            {
                for (int j = 9; j < 21; j++)
                {
                    printf("\033[%d;%dH ",j,i);
                }
            }
        }

        printf("\033[%d;%dH\x1b[39m�U������F�P,�h�䂷��F�Q,�񕜂���F�R     ",9,0);
        scanf("%d",&kazu);
        switch (kazu)
        {
        case 2:
            HP_1 = HP_1 + kougeki_2 - 1;
            printf("�h�䂵���I\n\n");
            break;
        case 1:
            kougeki();
            printf("\033[%d;%dH'%s':HP%d  �G:HP%d          \n",14,60,name_1,HP_1,HP_2);
            break;
        case 3:
            kaihuku();
            printf("\033[%d;%dH'%s':HP%d  �G:HP%d          \n",14,60,name_1,HP_1,HP_2);
            break;

        default:
            printf("�������Ȃ���H\n\n");
            break;
        }
        
        if(HP_2 == 0)
        {
            break;
        }
        printf("\033[%d;%dH\x1b[34m�G�̃^�[��\n\x1b[39m",13,0);
        sleep(1);
        kougeki_2 = GetRandom(min_2,max_2);
        HP_1 = HP_1 - kougeki_2;
        if (HP_1 < 0)
        {
            HP_1 = 0;
        }
        printf("'%s'��%d�̍U���A%s�̎c��HP%d\n\n",name_1,kougeki_2,name_1,HP_1);
        printf("\033[%d;%dH'%s':HP%d  �G:HP%d          \n",14,60,name_1,HP_1,HP_2);
        if (HP_1 == 0)
        {
            ribenji();
            return 0;
        }
        sleep(2);
    }
    {//���x���A�b�v
    HP_1 = HP + hp / 4;
    HP = HP_1;
    MP_1 = 10;
    min_1 = min_1 + (kougeki_2 + 1) / 2;
    max_1 = max_1 + (kougeki_2 + 1) / 2;
    min_2 = min_2 + 2;
    max_2 = max_2 + 2;
    printf("\x1b[36m���x���A�b�v�I\n\x1b[39mHP��%d�ɂȂ����I �U���͂��オ�����IHP,MP���񕜂���!\n\n",HP_1);
    printf("\033[%d;%dH'%s':HP%d  �G:HP%d          ",14,60,name_1,HP_1,HP_2);
    }
    sleep(2);
    printf("\033[%d;%dH�����F�P,�����ށF�Q\n",17,0);
    scanf("%d",&kazu);
    if(kazu == 1)
    {
        printf("\x1b[35m�V��ł���Ă��肪�Ƃ��I\x1b[39m\n");
        exit(0);
    }
    }

    return 0;
}

int map()
{
    int cnt,n,m;
    if(mapp == 0)
    {
    printf("\x1b[36m\033[%d;%dH<�E�ɐi�ށFF,���ɐi�ށFD,���ɐi�ށFS,��ɐi�ށFA>\x1b[39m",3,0);
    sleep(2);
    for(int i = 60; i < 80; i++)
    {
        printf("\033[%d;%dH��",4,i);
        for (int j = 5; j < 12; j++)
        {
            printf("\033[%d;%dH ",j,i);
        }
        printf("\033[%d;%dH��",12,i);
    }

    for (int i = 0; i < 9; i++)
    {
        n = 4 + i;
        m = 4 + i;
        printf("\033[%d;%dH��",n,60);
        printf("\033[%d;%dH��",m,80);
    }
    printf("\033[%d;%dH�Z",5,79);
    }

    mapp = 1;
    printf("\033[%d;%dHl",y,x);

    while(1){
        cnt = getch();
        switch (cnt)
        {
        case 'f':
            if (x == 79)
            {   
                break;
            }
            printf("\033[%d;%dH  ",y,x);
            x++;
            printf("\033[%d;%dHl",y,x);
            break;
        case 'd':
            if (x == 61)
            {
                break;
            }
            printf("\033[%d;%dH  ",y,x);
            x--;
            printf("\033[%d;%dHl",y,x);
            break;
        case 's':
            if (y == 11)
            {
                break;
            }
            printf("\033[%d;%dH  ",y,x);
            y++;
            printf("\033[%d;%dHl",y,x);
            break;
        case 'a':
            if (y == 5)
            {
                break;
            }
            printf("\033[%d;%dH  ",y,x);
            y--;
            printf("\033[%d;%dHl",y,x);
            break;
        default:
            break;
        }
        kazu = GetRandom(1,6);
        if (kazu == 1)
        {
            return 0;
        }
        if(x == 79 && y == 5)
        {
            boss_sen();
            return 0;
        }
        
    }
    return 0;
}

int kougeki()
{
    printf("'%s'�̍U��\n",name_1);
    sleep(1);
    kougeki_1 =GetRandom(min_1,max_1);
    HP_2 = HP_2 - kougeki_1;
    if (HP_2 < 0)
    {
        HP_2 = 0;
    }
    printf("%d�̃_���[�W�A�G�̎c��HP%d\n",kougeki_1,HP_2);
    if (HP_2==0)
    { 
        printf("�G���|�ꂽ! \x1b[33m'%s'�̏���!\n\n",name_1);
    }
    return 0;
}

int kaihuku()
{
    if(MP_1 == 0)
    {
        printf("MP�����肸�A�񕜂ł��܂���\n�U���F�P�h��F�Q   ");
        scanf("%d",&kazu);
        if(kazu == 1)
        {
            kougeki();
        }
        else if(kazu == 2)
        {
            HP_1 = HP_1 + kougeki_2 - 1;
            printf("�h�䂵���I\n\n");   
        }
        else{
            printf("�������Ȃ���H\n\n");
        }
    }
    else{
        HP_1 = HP;
        MP_1 = MP_1 - 2;
        printf("HP���񕜂��A%d�ɂȂ�܂���\nMP��2����,�c��MP:%d\n\n",HP_1,MP_1);
    }
    return 0;
}

int ribenji()
{
    printf("\x1b[31m'%s'������Ă��܂���!\nGAME OVER\n\n",name_1);
    printf("\x1b[39m���x���W����H\n����:1,���Ȃ�:2\n");
    scanf("%d",&kazu);
    if (kazu == 1)
    {
        mapp = 0;
        main();
    }
    else if(kazu == 2)
    {
        printf("\x1b[35m�V��ł���Ă��肪�Ƃ��I\x1b[39m\n");
        return 0;
    }
    else{
        printf("���Ⴀ�������V��ł�\n");
        kazu = 1;
        main();
    }
    return 0;
}

int boss_sen()
{
    printf("\033[%d;%dH%s:HP%d,MP%d,����:��\n",4,0,name_1,HP_1,MP_1);
    
    HP_2 = max_1 * 2.5;
    hp = HP_2;
    printf("\x1b[31m////�{�X��////");
    sleep(1);
    printf("\r\nHP:%d�̃{�X�����ꂽ�I\n",HP_2);

    printf("\033[%d;%dH'%s':HP%d  �G:HP%d          \n",14,60,name_1,HP_1,HP_2);

    while(HP_1 > 0 && HP_2 > 0)
    {
        printf("\033[%d;%dH\x1b[32m%s�̃^�[��\n",8,0,name_1);
        sleep(2);
        for(int i = 0; i < 60; i++)
        {
            for (int j = 9; j < 21; j++)
            {
                printf("\033[%d;%dH ",j,i);
            }
        }
        printf("\033[%d;%dH\x1b[39m�U������F�P,�h�䂷��F�Q,�񕜂���F�R     ",9,0);
        scanf("%d",&kazu);
        switch (kazu)
        {
        case 2:
            HP_1 = HP_1 + kougeki_2 - 1;
            printf("�h�䂵���I\n\n");
            break;
        case 1:
            kougeki();
            if(HP_2 == 0)
            {
            printf("\x1b[33m�{�X���������I���߂łƂ��I\x1b[39m\n");
            exit(0);
            }
            printf("\x1b[31m\033[%d;%dH'%s':HP%d  �G:HP%d          \n",14,60,name_1,HP_1,HP_2);
            break;
        case 3:
            kaihuku();
            printf("\x1b[31m\033[%d;%dH'%s':HP%d  �G:HP%d          \n",14,60,name_1,HP_1,HP_2);
            break;
        default:
            printf("�������Ȃ���H\n\n");
            break;
        }

        kazu = GetRandom(1,2);
        sleep(1);
        printf("\x1b[31m�{�X�̃^�[��\n");
        sleep(1);
        switch(kazu)
        {
        case 1:
            printf("�{�X�u�񕜁v\n");
            if(HP_2 < hp - max_1)
            {
                HP_2 = HP_2 + max_1;
            }
            else
            {
                HP_2 = hp;
            }
            printf("�{�X��HP��%d�ɂȂ���\n\n",HP_2);
            break;
        case 2:
            printf("�{�X�u�U���v\n");
            kougeki_2 = GetRandom(min_2,max_2);
            HP_1 = HP_1 - kougeki_2;
            if (HP_1 < 0)
            {
                HP_1 = 0;
            }
            printf("'%s'��%d�̍U���A%s�̎c��HP%d\n\n",name_1,kougeki_2,name_1,HP_1);
            if (HP_1 == 0)
            {
                ribenji();
                return 0;
            }
            break;
        default:
            break;
        }
        printf("\033[%d;%dH'%s':HP%d  �G:HP%d          \n",14,60,name_1,HP_1,HP_2);
    }

    return 0;
}

int GetRandom(int min,int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}