extern struct database{
		int base;
		char s[30];
};
#include"BubbleSort.h"
void BubbleSort1(int *p,int n){//���� 
	int i,j;
	for (j=0;j<n-1;j++){                           
        for (i=0;i<n-1-j;i++){//����ѭ���ﵽð��Ч�� 
        	if(p[i]>p[i+1]){
                swap1(&p[i+1], &p[i]);//���� 
            }
        }
    }
}
void BubbleSort2(char *p,int n){//�ַ����� 
	int i,j;
	for (j=0;j<n-1;j++){                           
        for (i=0;i<n-1-j;i++){
        	if(p[i]>p[i+1]){
                swap2(&p[i+1], &p[i]);
            }
        }
    }
}
void BubbleSort3(struct database *p,int n){
	int i,j;
	for (j=0;j<n-1;j++){                    
        for (i=0;i<n-1-j;i++){
        	if(p[i].base>p[i+1].base){//�Ƚ�baseֵ 
                swap3(&p[i+1], &p[i]);
            }
        }
    }
}
