extern struct database{
		int base;
		char s[30];
};
#include"InsertionSort.h"
void InsertionSort1(int *p,int n){//�������� 
	int i,j,flag;
	for(i=1;i<n;i++){
		flag=p[i];//flag��¼p[i]ֵ 
		for(j=i-1;(j>=0)&&(p[j]>flag);j--){
			p[j+1]=p[j];
		}
		p[j+1]=flag;//���� 
	}
}
void InsertionSort2(char *p,int n){//�ַ����� 
	int i,j;
	char flag;
	for(i=1;i<n;i++){
		flag=p[i];
		for(j=i-1;(j>=0)&&(p[j]>flag);j--){
			p[j+1]=p[j];
		}
		p[j+1]=flag;
	}
}
void InsertionSort3(struct database *p,int n){
	int i,j;
	struct database flag;
	for(i=1;i<n;i++){
		flag.base=p[i].base;
		strcpy(flag.s,p[i].s);
		for(j=i-1;(j>=0)&&(p[j].base>flag.base);j--){//�Ƚ�baseֵ 
			p[j+1].base=p[j].base;
			strcpy(p[j+1].s,p[j].s);
		}
		p[j+1].base=flag.base;
		strcpy(p[j+1].s,flag.s);//���� 
	}
}
