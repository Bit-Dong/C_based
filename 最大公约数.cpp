#include<stdio.h>
int main()
{
	int a,b,c;
	printf("�����������������ǵ����Լ��");
	scanf("%d%d",&a,&b); 
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("���Լ��=%d\n",b);
}
