#include"type1.h"
void type1(int method){
	//���� 
	int n,i;
	printf("����������Ԫ�ظ�����\n"); 
	scanf("%d",&n);
	int a[n];
	printf("���������飺\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *p=a;
	//���� 
	switch(method){
		case 1:SimpleSelectionSort1(p,n);break;
		case 2:BubbleSort1(p,n);break;
		case 3:InsertionSort1(p,n);break;
		case 4:QuickSort1(p,n);break;
	}
	//��� 
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
