#include<stdio.h>
#include<stdlib.h>
double power(double,int); 
int main(void)
{
    double i;
    int n;
    printf("�п�J�@�Ӽ�:");
    scanf("%lf",&i);
    printf("�п�J����:");
    scanf("%d",&n);
    printf("%lf��%d����=%lf",i,n,power(i,n));
    printf("\n");
    system("pause");
    return 0;
}
double power(double i,int n)
{
       int a;
       for(a=1;a<=n;a++)
          i=i*n;
          return i;
       
       
       }
