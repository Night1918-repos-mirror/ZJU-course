#include"create.h"
#include"search.h"
#include"print.h"
int map0[N+2][N+2];
struct direction{
	int x,y;
};
struct direction fx[4]={
	{0,1},{1,0},{0,-1},{-1,0}
};//��¼��̽���� 
int i,j,k; 
struct direction p;//��ǰλ�� 
struct direction op;//��ʼλ�� 
struct direction ed;//�յ� 
int tmp,tmp1;

int min=999,cnt=0,t=0;
int map1[N+2][N+2];//���Ǽ�¼�߹��ĸ��ӵĵ�ͼ��0Ϊδ�߹� 
int roadx[100],roady[100];//��¼���·����������̽��·�� 

struct note{
		int x,y;
		int father,step;
	};//search1������ʵ�ֶ��еĽṹ�� 
struct note que[N*N+1];
int head,tail;//���е�ͷ��β 

int main(){
	srand(time(0));
//	create();
	create1();
	map1[op.x][op.y]=1;
	p.x=op.x;
	p.y=op.y;
	//search();
	search1();
	//print();
	print1();
	return 0;
}
