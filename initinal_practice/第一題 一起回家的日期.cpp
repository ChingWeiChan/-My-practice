/*�Ὤ����

�Ĥ@�D �@�_�^�a�����
���D�ԭz
���B�B�~���ܤj�F�A�`�`�O���M���ۤv���p�Ĥ���ɭԷ|�^�ӦѮa�ݬݥL�C�ӥB�C�Ӥp�ĳ��Ʒ~�����A�D�`���L�A���j��l�C15�Ѧ^�Ѯa�@��B�j�k�������A�i�H�C3�Ѧ^�Ӥ@��C���B�B�Ʊ榳�H�i�H�����L�A��X����ɭԥL���p�ĭ̷|�@�_�^�ӬݥL�C

��J�����G
�Ĥ@��O���B�B�`�@��N�Ӥp�ġC
�ĤG��h��N�ӼƦr�N��p�ĭӧO�^�a���ɶ��A�C�ӼƦr�H�Ů�j�}�C
�ĤT��O�̪�@�������p�Ĥ@�_�^�a������A�榡��YYYY/MM/DD�C

��X�����G
�@�@��C��X�U���@�_�^�a������A����榡��YYYY/MM/DD�C

��J�d��
4
4 5 12 21
2015/10/10

��X�d��
2016/12/05
*/ 
#include<stdlib.h>
#include<stdio.h>
void bubble_sort(int*, int);
int  multiple(int*);
short n_child;
//int primes[N + 1] = {0}; //��ư}�C 
//void create(int*);       //�إ߽�ƪ� 
//void filter(int*, int);   //�إ߽�ƪ� (�M����Ƥ�����) */ 
int main(void){
   // create(primes);
   
	scanf("%d",&n_child);   //�X�Ӥp��
	int day[n_child-1];    //�إߤp�Ħ^�a�ɶ����}�C
	int TheSameDay;     //�ɶ��̤j������ 
   bubble_sort(day[],n_child);
   
}
void bubble_sort(int num[],int k) {
	printf("%d",k);
	int i,j,m;
	for(i=0; i<k; i++) {
		for(j=0; j<k; j++) {
			if(num[j]>num[j+1]) {
				m=num[j+1];
				num[j+1]=num[j];
				num[j]=m;
			}
		}
	}
}
int  multiple(int day[]){
	int i,j,k;
	int max=day[n_child-1];
	for(i=2; i<=max; i++) {
		for(j=2; j<i; j++) {
			if(i%j==0 && i>2){ 
			  k++;
		      break;	   
			}
			}
			if(k!=0){
			    k=0;
				continue;
				}
	for(k=)						
			}
}



