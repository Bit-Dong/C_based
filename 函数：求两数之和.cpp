#include<stdio.h>
#include<math.h>
int main()
{
	float add(float x,float y );     //�����ͣ��������� 
	float a,b,c;
	scanf("%f%f",&a,&b);
	c=add(a,b);
	printf("sum=%5.2f",c);         //%5.2f��ʾ�������� ������λС�� 
}
float add(float x,float y)
{
	float z;
	z=x+y;
	return(z);
}
