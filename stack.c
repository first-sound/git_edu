#include <stdio.h>

int main(void)
{
    int suuti,i;
    int array[10000];

    printf("�X�^�b�N:1\n�L���[:2\n");
    scanf("%d",&suuti);

    if (suuti != 1 && suuti != 2)
    {
        printf ("�Ȃ���");
        return 0;
    }
    

    printf("���͂��Ă�������\n");
    for (i = 0; i < 10000; i++)
    {
        scanf("%d",&array[i]);

        if(array[i] == -1)
        {   
             break;
        }
    }
    

    if(suuti == 1)
    {
        //�X�^�b�N
        for (int n = 0; n < i;)
        {
            i = i - 1;
            printf("%d\n",array[i]);
        }
        
        
    }
    else if(suuti == 2)
    {
        //�L���[
        for ( int j = 0; j < i; j++)
        {
            printf("%d\n",array[j]);
        }
        
    }
        
    return 0;
}