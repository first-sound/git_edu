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
        printf("�v���C���[�̖��O(10�����܂�)����͂��Ă�������\n");
        scanf("%10s",name_1);
    }
    else if(kazu == 1)
    {
        HP_1 = 10,HP = 10,kougeki_1 = 1,MP_1 = 10,min_1 = 3,max_1 = 6,min_2 = 1,max_2 = 7;
    }

    for (int i = 0; i < 4; i++)
    {
    printf("('')/  < %s\nHP%d,MP%d,����:��\n\n",name_1,HP_1,MP_1);
    
    HP_2 = GetRandom(5 + i * 3.5,13 + i * 3.5);
    hp = HP_2;

    printf("\x1b[31mHP:%d�̓G�������ꂽ!\n\n",HP_2);

    while(HP_1 > 0 && HP_2 > 0)
    {
        printf("\x1b[32m%s�̃^�[��\n",name_1);
        printf("\x1b[39m�U������F�P,�h�䂷��F�Q,�񕜂���F�R\n");
        scanf("%d",&kazu);
        switch (kazu)
        {
        case 2:
            HP_1 = HP_1 + kougeki_2 - 1;
            printf("�h�䂵���I\n\n");
            break;
        case 1:
            kougeki();
            break;
        case 3:
            kaihuku();
            break;

        default:
            printf("�������Ȃ���H\n\n");
            break;
        }
        
        if(HP_2 == 0)
        {
            break;
        }
        printf("\x1b[34m�G�̃^�[��\n\x1b[39m�G�̍U��\n");
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
    }
    HP_1 = HP + hp / 4;
    HP = HP_1;
    MP_1 = 10;
    min_1 = min_1 + (kougeki_2 + 1) / 2;
    max_1 = max_1 + (kougeki_2 + 1) / 2;
    min_2 = min_2 + 2;
    max_2 = max_2 + 2;
    printf("\x1b[36m���x���A�b�v�I\n\x1b[39mHP��%d�ɂȂ����I �U���͂��オ�����I\nHP,MP���񕜂���!\n\n",HP_1);
    printf("�����F�P,�����ށF�Q\n");
    scanf("%d",&kazu);
    if(kazu == 1)
    {
        printf("\x1b[35m�V��ł���Ă��肪�Ƃ��I\x1b[39m\n");
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

    printf("\n\n\x1b[31m////�{�X��////\n\nHP:50�̃{�X�����ꂽ�I\n");
    HP_2 = 50;

    while(HP_1 > 0 && HP_2 > 0)
    {
        printf("\x1b[32m%s�̃^�[��\n",name_1);
        printf("\x1b[39m�U������F�P,�h�䂷��F�Q,�񕜂���F�R\n");
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
            return 0;
            }
            break;
        case 3:
            kaihuku();
            break;

        default:
            printf("�������Ȃ���H\n\n");
            break;
        }

        kazu = GetRandom(1,2);
        sleep(1);
        printf("\x1b[31m�{�X�̃^�[��\n");
        switch(kazu)
        {
        case 1:
            printf("�{�X�u�񕜁v\n");
            if(HP_2 < 40)
            {
                HP_2 = HP_2 + 10;
            }
            else if(HP_2 <= 50)
            {
                HP_2 = 50;
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
    }
    return 0;
}

int kougeki()
{
    printf("'%s'�̍U��\n",name_1);
    kougeki_1 =GetRandom(min_1,max_1);
    HP_2 = HP_2 - kougeki_1;
    if (HP_2 < 0)
    {
        HP_2 = 0;
    }
    printf("�G��%d�̃_���[�W�A�G�̎c��HP%d\n\n",kougeki_1,HP_2);
    if (HP_2==0)
    { 
        printf("�G���|�ꂽ!\n\x1b[33m'%s'�̏���!\n\n",name_1);
    }
    return 0;
}

int kaihuku()
{
    if(MP_1 == 0)
    {
        printf("MP�����肸�A�񕜂ł��܂���\n�U���F�P�h��F�Q\n");
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

int GetRandom(int min,int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}