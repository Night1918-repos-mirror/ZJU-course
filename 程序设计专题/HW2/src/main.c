#include"select.h"
struct database{
		int base;
		char s[30];
};
#include"SimpleSelectionSort.h"
#include"swap.h"
#include"type1.h"
#include"type2.h"

int main(){
	int type=0;
	printf("��ѡ������Ҫ����������������ͣ�\n[1]��������\n[2]�ַ���\n[3]�ṹ��\n");
	scanf("%d",&type);
	int method=select();//ѡ���㷨 
	
//	����type����	
	if(type==1){
		type1(method);
	}else if(type==2){
		type2(method);
	}else if(type==3){
		type3(method);
	}
	return 0;
}
