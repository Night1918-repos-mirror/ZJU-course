extern struct database{
		int base;
		char s[30];
}data;
#include"type3.h"
void type3(int method){
	//���� 
	int n,i;
	printf("������ṹ����Ԫ�ظ�����\n"); 
	scanf("%d",&n);
	struct database data[n];
	printf("������ṹ���ݣ���� ���ݣ���\n");
	for(i=0;i<n;i++){
		scanf("%d %s",&data[i].base,data[i].s);
	}
	struct database *p=data;
	//�Ƚ� 
	switch(method){
		case 1:SimpleSelectionSort3(p,n);break;
		case 2:BubbleSort3(p,n);break;
		case 3:InsertionSort3(p,n);break;
		case 4:QuickSort3(p,n);break;
	}
	//��� 
	for(i=0;i<n;i++){
		printf("%d %s\n",data[i].base,data[i].s);
	}
}
