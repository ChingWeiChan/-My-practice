//²����ƪ�
#include<stdlib.h>
#include<stdio.h>
int main(void) {
	int i,j,k=0;  //LOOP
	int max;  //�d�򤧳̤j��
	printf("Please input the maxium:");
	scanf("%d",&max);
	for(i=2; i<=max; i++) {
		for(j=2; j<i; j++) {
			if(i%j==0)
				k++;
		}
		if(k==0)
			printf("%d\n",i);
			k=0;
	}
	return 0;
}
