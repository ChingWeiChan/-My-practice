#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a;
    start:
    printf("�п�J�@�Ӿ��:");
    scanf("%d",&a);
    if(a>=0)
    {
       if(a%2!=0)
           printf("�A��J�����_��\n");
       else
           printf("�A��J��������\n");
}
    else
    {
       printf("�Э��s��J\n");  
      
}
 goto start;

    system("pause");
    return 0;
}
