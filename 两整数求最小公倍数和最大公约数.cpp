#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d%d",&a,&b);
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	d=b;
	printf("���Լ�� is %d\n",d);
	scanf("%d%d",&a,&b);
	e=a*b/d;
	printf("��С������ is %d\n",e);
}
