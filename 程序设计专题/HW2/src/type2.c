#include"type2.h"
void type2(int method){
	//���� 
	int n,i;
	printf("�������ַ���Ԫ�ظ�����\n"); 
	scanf("%d",&n);
	char a[n];
	printf("�������ַ�����\n");
		scanf("%s",a);
	char *p=a;
	//���� 
	switch(method){
		case 1:	SimpleSelectionSort2(p,n);break;
		case 2:BubbleSort2(p,n);break;
		case 3:InsertionSort2(p,n);break;
		case 4:QuickSort2(p,n);break;
	}
	//��� 
	printf("%s\n",a);
}	
