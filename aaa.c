#include <stdio.h>
int main(void) {
    //�P��
    double man1,man2,man3;
    double score1,score2,score3;
    double kadai,chukan,teiki;
    double hyoA,hyoB,hyoC;
    double score;

    printf("�ۑ�A���ԁA����̕]�������F");
    scanf(" %lf, %lf, %lf",&kadai,&chukan,&teiki);

    printf("���ꂼ��̖��_�̓_���F");
    scanf(" %lf, %lf, %lf",&man1,&man2,&man3);

    printf("���ꂼ��̊l�������_���F");
    scanf(" %lf, %lf, %lf",&score1,&score2,&score3);

    printf("A,B,C,F�̕]����F");
    scanf(" %lf, %lf, %lf",&hyoA,&hyoB,&hyoC);

    score = score1 / man1 * kadai + score2 / man2 * chukan + score3 / man3 * teiki;
    printf("%f\n",score);

    if(score >= hyoA)
        printf("A");
    else if(score >= hyoB)
        printf("B");
    else if(score >= hyoC)
        printf("C");
    else 
        printf("F");
    return 0;
}