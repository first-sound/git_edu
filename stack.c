#include <stdio.h>

int i = 0,array[10000];

int stack(void);
int queue(void);
int nyuryoku(void);

int main(void)
{
    int suuti;

    printf("�X�^�b�N:1\n�L���[:2\n");
    scanf("%d",&suuti);

    if (suuti != 1 && suuti != 2)
    {
        printf ("�Ȃ���");
        return 0;
    }

    if(suuti == 1)
    {
        stack();
    }
    else if(suuti == 2)
    {
        queue();
    }

    return 0;
}

int stack()
{
    nyuryoku();
    int m = i,kazu;
    for (int n = 0; n < m;)
    {
        m = m - 1;
        printf("%d\n",array[m]);
    }

    while(i < 10000){
    printf("push:1,pop:2,peek:3,size:4,�����:5\n:");
    scanf("%d",&kazu);

    switch (kazu)
    {
    case 1:
        nyuryoku();
        m = i;
        for (int n = 0; n < m;)
        {
            m = m - 1;
            printf("%d\n",array[m]);
        }
        break;
    case 2:
        if(i == 0)
        {
            printf("pop�ł��Ȃ���\n");
        }
        else
        {
            printf("%d��pop���ꂽ��\n\n",array[i-1]);
            i = i - 1;
            m = i;
            for (int n = 0; n < m;)
            {
                m = m - 1;
                printf("%d\n",array[m]);
            }
        }
        break;
    case 3:
        printf("%d\n",array[i-1]);
        break;
    case 4:
        printf("%d\n",i);
        break;
    case 5:
        return 0;
        break;
    default:
        printf("�Ȃ���\n");
        break;
    }
    }
    return 0;
}

int queue()
{
        //�L���[
    int kazu;
    nyuryoku();
    for ( int j = 0; j < i; j++)
    {
        printf("%d\n",array[j]);
    }
    while(i < 10000){
    printf("enqueue:1,dequeue:2,peek:3,size:4,�����:5\n:");
    scanf("%d",&kazu);

    switch (kazu)
    {
    case 1:
        nyuryoku();
        for ( int j = 0; j < i; j++)
        {
            printf("%d\n",array[j]);
        }
        break;
    case 2:
        if (i == 0)
        {
            printf("pop�ł��Ȃ���\n");
        }
        else
        {
            printf("%d��pop���ꂽ��\n\n",array[0]);
            for ( int e = 0; e < i-1; e++)
            {
                array[e]=array[e+1];
                printf("%d\n",array[e]);
            }
            i = i - 1;
        }
        break;
    case 3:
        printf("%d\n",array[0]);
        break;
    case 4:
        printf("%d\n",i);
        break;
    case 5:
        return 0;
        break;
    default:
        printf("�Ȃ���\n");
        break;
    }
    }
    return 0;
}

int nyuryoku()
{
    int count = sizeof(array) / sizeof(array[0]);
    printf("���͂��Ă�������\n");
    while (i < count)
    {
        scanf("%d",&array[i]);

        if(array[i] == -1)
        {   
             return 0;
        }
        i++;
    }
    printf("����������܂���\n");
    return 0;
}