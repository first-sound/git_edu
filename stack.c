#include <stdio.h>

int i=0,sum=0,array[10000];

int stack(void);
int queue(void);
int nyuryoku(int);

int main(void)
{
    int suuti;

    printf("スタック:1\nキュー:2\n");
    scanf("%d",&suuti);

    if (suuti != 1 && suuti != 2)
    {
        printf ("ないよ");
        return 0;
    }

    nyuryoku(suuti);

    while(i < 10000){
    printf("push:1\nenqueue:2\npop:3\ndequeue:4\nおわる:5\n:");
    scanf("%d",&suuti);

    switch (suuti)
    {
    case 5:
        return 0;
        break;
    case 1:
    case 2:
        nyuryoku(suuti);
        break;
    case 3:
        i = i - 1;
        stack();
        break;
    case 4:
        for ( int e = 0; e < i-1; e++)
        {
            array[e]=array[e+1];
            printf("%d\n",array[e]);
        }
        i = i - 1;
        break;

    default:
        printf("ないよ\n");
        break;
    }
    }

    return 0;
}

int stack()
{
    int m = i;
    //スタック
    for (int n = 0; n < m;)
    {
        m = m - 1;
        printf("%d\n",array[m]);
    }
    return 0;
        
}
int queue()
{
        //キュー
    for ( int j = 0; j < i; j++)
    {
        printf("%d\n",array[j]);
    }

    return 0;
}

int nyuryoku(int suu)
{
       printf("入力してください\n");
    while (i < 10000)
    {
        scanf("%d",&array[i]);

        if(array[i] == -1)
        {   
             break;
        }
        i++;
    }
        if(suu==1)
    {
        stack();
    }
    else if(suu==2)
    {
        queue();
    }
}