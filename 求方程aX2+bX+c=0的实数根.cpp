#include<stdio.h>
#include<math.h>          //Ϊ��ʹ����ƽ��������sqrt() 
int main()
{
	float a,b,c,disc,x1,x2;
	printf("input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);       //���뷽�̵�����ϵ����ֵ 
	disc=b*b-4*a*c;           //���б�ʽ��ֵ����disc 
	x1=(-b+sqrt(disc))/(2*a);        //�󷽳̵ĸ� 
	x2=(-b-sqrt(disc))/(2*a);
	printf("\nx1=%6.2f\nx2=%6.2f\n",x1,x2);
	return 0;
 } 
