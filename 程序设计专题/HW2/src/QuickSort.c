extern struct database{
		int base;
		char s[30];
};
#include"QuickSort.h"
void QuickSort1(int *p,int n){
	int low=0,high=n-1;//ͷ��β 
	int temp=p[0];
	while(low<high){//�ж�������ǵ��Ƿ��غ� 
		while(low<high&&p[high]>=temp){
			high--;//βǰ�� 
		}
		p[low]=p[high];
		while(low<high&&p[low]<=temp){
			low++;//ͷ���� 
		}
		p[high]=p[low];
	}
	p[low]=temp;
	//�ݹ�����tempǰ��ͺ��� 
	if(low-1>1){
		QuickSort1(p,low-1);
	}
	if(n-high-1>1){
		QuickSort1(&p[low+1],n-high-1);
	}
}
void QuickSort2(char *p,int n){//�ַ����ͣ��㷨ͬ�� 
	int low=0,high=n-1;
	char temp=p[0];
	while(low<high){
		while(low<high&&p[high]>=temp){
			high--;
		}
		p[low]=p[high];
		while(low<high&&p[low]<=temp){
			low++;
		}
		p[high]=p[low];
	}
	p[low]=temp;
	if(low-1>1){
		QuickSort2(p,low-1);
	}
	if(n-high-1>1){
		QuickSort2(&p[low+1],n-high-1);
	}
}
void QuickSort3(struct database *p,int n){//�ṹ���� 
	int low=0,high=n-1;
	int temp=p[0].base;//tempΪint���� 
	while(low<high){
		while(low<high&&p[high].base>=temp){
			high--;//β���� 
		}
		p[low].base=p[high].base;
		strcpy(p[low].s,p[high].s);
		while(low<high&&p[low].base<=temp){
			low++;//ͷǰ�� 
		}
		p[high].base=p[low].base;
		strcpy(p[high].s,p[low].s);
	}
	p[low].base=temp;
	//�ݹ� 
	if(low-1>1){
		QuickSort3(p,low-1);
	}
	if(n-high-1>1){
		QuickSort3(&p[low+1],n-high-1);
	}
}
