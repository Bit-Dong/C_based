#include<stdio.h>
int main()
{
	float add(float x,float y);    //�Ա����ú���add����������
	float a,b,c;
	printf("Please enter a and b\n");
	scanf("%f%f",&a,&b);            //��������ʵ�� 
	c=add(a,b);                    //����add���� 
	printf("c=%f\n",c);
	return 0;
}
float add(float x,float y)       //����add���� 
{
	float z;
	z=x+y;
	return(z);                   //�ѱ���z��ֵ��Ϊ����ֵ���� 
}
