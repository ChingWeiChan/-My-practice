#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int score;
    while(1){
    printf("��J���Z:");
    scanf("%d",&score);
    if(score>=90 and score<=100)
            printf("�����N�n�δ�\n");
       else if(score>=60)
            printf("���A�}�G�@��\n");
       else if(score>=0)
            printf("��z�F�A�U�@��\n");
    else
            printf("�A�F��?\n");
    }

    system("pause");
    return 0;
}
