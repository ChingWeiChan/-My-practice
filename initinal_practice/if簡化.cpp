#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a,b,c;
    printf("��J��Ӽ�:");
    scanf("%d %d",&a,&b);
    a>b ? (c=a):(c=b);
    printf("%d�j",c);
    system("pause");
    return 0;
}
