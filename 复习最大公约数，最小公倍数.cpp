#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,n=0;
	printf("��������������");
	scanf("%d%d",&a,&b);
	d=a;e=b;
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	f=d*e/b;
	printf("�����������Լ��Ϊ%d,��С������Ϊ%d\n",b,f);
	
 } 
