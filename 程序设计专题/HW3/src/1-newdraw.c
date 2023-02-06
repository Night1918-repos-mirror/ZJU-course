#include "graphics.h"
#include "extgraph.h"
#define PAI 3.14159
#include<math.h>

void forward(double distance); /*�ص�ǰ�����ߣ�����Ϊ
 distance���� distance Ϊ����ʱ����*/
void turn (double angle); /*˳ʱ����ת�Ƕ� angle���Ƕȵ�λΪ
 DEG���� angle Ϊ����ʱ��ʱ����ת*/
void move(double distance); /*�ص�ǰ�����ƶ��ʣ������ߣ�������
 Ϊ distance���� distance Ϊ����ʱ����*/

double direction;//ȫ�ֱ���������
void drawtrees(double w,double h);
 
void Main(){
	direction=PAI/2;
	InitGraphics();
	double w=GetWindowWidth();
	double h=GetWindowHeight();
	SetPenColor("red");
	int i;
	for(i=0;i<20;i++){
		double dir=direction;
		drawtrees(w,h);
		direction=dir;
		direction+=PAI/9;
	}
}

void forward(double distance){
	DrawLine(distance*cos(direction),distance*sin(direction));	
}
void turn (double angle){
	direction-=angle;
}
void move(double distance){
	double x=GetCurrentX();
	double y=GetCurrentY();
	MovePen(x+distance*cos(direction),y+distance*sin(direction));
}
void drawtrees(double w,double h){
	MovePen(w/2,h/2);
	forward(h/4);
	turn(PAI/3);
	SetPenColor("green");
	forward(h/4);
	move(-h/4);
	turn(-PAI*2/3);
	forward(h/4);
	move(-h/4);
	turn(PAI/3);
	move(h/4);
	SetPenColor("red");
	turn(-PAI*2/3);
	forward(h/4);
	move(-h/4);
	turn(PAI*4/3);
	forward(h/4);
}
