#include"swap.h"
extern struct database{
		int base;
		char s[30];
};
void swap1(int *a,int *b){//���� 
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(char *a,char *b){//�ַ� 
	char temp = *a;
    *a = *b;
    *b = temp;
}

void swap3(struct database *a,struct database *b){
	int base1;//��ʱ��¼tempֵ 
	char s1[30];//��ʱ��¼tempֵ 
	base1=(*a).base;
	strcpy(s1,(*a).s);
    (*a).base = (*b).base;
    strcpy((*a).s , (*b).s);
    (*b).base = base1;
    strcpy((*b).s , s1);
}
