#include<stdio.h>
#include<stdlib.h>
#include "c:\area.h" /*���Y�ɪ��m��
                #define pi 3.14
                #define circle ((pi)*(r)*(r))
                #define rectangle(length,height) ((length)*(height))
                #define triangle(base,height) ((base)*(height)/2.)
                                                                          */
int main(void)
{
    float base,height;
    printf("��:");
    scanf("%f",&base);
    printf("��:");
    scanf("%f",&height);
    printf("Output:%.2f\n",triangle(base,height));
  
    system("pause");
    return 0;
}
