extern struct database{
		int base;
		char s[30];
};
#include"SimpleSelectionSort.h"
void SimpleSelectionSort1(int *p,int n){//�������� 
	int i,j;
	for (i = 0 ; i < n - 1 ; i++){
        int min = i;//��¼ÿ��ѭ����Сֵ 
        for (j = i + 1; j < n; j++)
                if ((p[j]<p[min])){
                	min = j;
				}
        swap1(&p[min], &p[i]);//��������ֵ 
    }
}

void SimpleSelectionSort2(char *p,int n){//�ַ����� 
	int i,j;
	for (i = 0 ; i < n - 1 ; i++){
        int min = i;
        for (j = i + 1; j < n; j++)
                if (p[j]<p[min]){
                	min = j;//�洢��Сֵ 
				}
        swap2(&p[min], &p[i]);//�ַ����� 
    }
}

void SimpleSelectionSort3(struct database *p,int n){
	int i,j;
	for (i = 0 ; i < n - 1 ; i++){
        int min = i;
        for (j = i + 1; j < n; j++)
                if (p[j].base<p[min].base){
                	min = j;
				}
        swap3(&p[min], &p[i]);//�ṹ���� 
    }
}
