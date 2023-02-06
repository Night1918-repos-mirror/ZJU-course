#include<stdio.h>
#include"create.h"
extern int map0[N+2][N+2];
extern struct direction{
	int x,y;
} fx[4];
extern int i,j,k; 
extern struct direction p;
extern struct direction op;
extern struct direction ed;
extern int tmp,tmp1;

void create(){
	op.x=rand()%N+1;
	op.y=rand()%N+1;
	ed.x=rand()%N+1;
	ed.y=rand()%N+1;
	while(op.x==ed.x&&op.y==ed.y){
		ed.x=rand()%N+1;
		ed.y=rand()%N+1;
	}//���������յ�
	
	for(i=0;i<N+2;i++){
		for(j=0;j<N+2;j++){
			map0[i][j]=-1;
		}
	}//���ͼ��ȫΪǽ
	
	p.x=op.x;
	p.y=op.y;
	int m=0; 
	map0[p.x][p.y]=0;
	while(!(p.x==ed.x&&p.y==ed.y)){
		i=rand()%4;
		tmp=fx[i].x+p.x;
		tmp1=fx[i].y+p.y;
		while(tmp<1||tmp>N||tmp1<1||tmp1>N){
			i=rand()%4;
			tmp=fx[i].x+p.x;
			tmp1=fx[i].y+p.y;
		}p.x=tmp;
		p.y=tmp1;
		map0[p.x][p.y]=0;
		m++;
	}//��֤�������˳�������յ� 
	 
	while(m<=N*N/2){
		int a=rand()%N+1;
		int b=rand()%N+1;
		if(a==op.x&&b==op.y)continue;
		if(a==ed.x&&b==ed.y)continue;
		if(map0[a][b])map0[a][b]=0;m++;
	}//��·�����ٴ�ͨһЩ�� 
	
	for(i=0;i<=N+1;i++){
		for(j=0;j<=N+1;j++){
			if(map0[i][j]){
				printf("��"); 
			}else{
				printf("��");
			}
		}
		printf("\n");
	}printf("���Ϊ��%d��%d��\n",op.x,op.y);
	printf("�յ�Ϊ��%d��%d��\n",ed.x,ed.y);
}

int judge(){
	int h;
	for(h=0;h<4;h++){
		if(map0[2*fx[h].x+p.x][2*fx[h].y+p.y]&&2*fx[h].x+p.x>0&&2*fx[h].x+p.x<N+1&&2*fx[h].y+p.y>0&&2*fx[h].y+p.y<N+1){
			return 1;
		}
	}return 0;
}//�жϸõ������Ƿ���δ�߹���·�ĺ��� 

void doit(){
	while(judge()){//�жϸõ������Ƿ���δ�߹���· 
		int i1=rand()%4;
		tmp=2*fx[i1].x+p.x;
		tmp1=2*fx[i1].y+p.y;//��������� 
		while(tmp<1||tmp>N||tmp1<1||tmp1>N||map0[tmp][tmp1]==0){
			i1=rand()%4;
			tmp=2*fx[i1].x+p.x;
			tmp1=2*fx[i1].y+p.y;
		}//��·�Ѿ��߹�����Խ����������� 
		map0[tmp][tmp1]=0;
		map0[tmp-fx[i1].x][tmp1-fx[i1].y]=0;
		p.x=tmp;
		p.y=tmp1;
		doit();//�ݹ� 
		p.x=p.x-2*fx[i1].x;
		p.y=p.y-2*fx[i1].y;//�ص���һ���� 
	}
		return;
}
void create1(){
	for(i=0;i<N+2;i++){
		for(j=0;j<N+2;j++){
			map0[i][j]=-1;
		}
	}//���ͼ��ȫΪǽ
	printf("���������(������1-%d)��\n",N);
	scanf("%d %d",&op.x,&op.y);
	printf("�������յ�(������1-%d)��\n",N);
	scanf("%d %d",&ed.x,&ed.y);//ȷ������յ� 
	map0[op.x][op.y]=0;//���Ϊ0 
	p.x=op.x;
	p.y=op.y;
	doit();//��ʼ�ݹ� 
	for(i=0;i<=N+1;i++){
		for(j=0;j<=N+1;j++){
			if(map0[i][j]){
				printf("��"); 
			}else{
				printf("��");
			}
		}
		printf("\n");
	}printf("���Ϊ��%d��%d��\n",op.x,op.y);
	printf("�յ�Ϊ��%d��%d��\n",ed.x,ed.y);//��� 
} 

