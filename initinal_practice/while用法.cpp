#include<stdio.h>
#include<stdlib.h>
/*�q1�[��h�֤~��W�L5050*/ 
int main(void)
{
   int i=1,sum=0;
   while(sum<=5050)
    {
      sum+=i;
      printf("�q1�[��%d=%4d\n",i,sum);
      i++       ;    
                   }
   printf("�����֥[%d��\n",i-1);
    system("pause");
    return 0;
}
