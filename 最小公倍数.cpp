#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("�����������������ǵ���С������ ");
	scanf("%d%d",&a,&b); 
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	d=b;
	printf("�ظ��������������� ");
	scanf("%d%d",&a,&b);
	e=a*b/d;
	printf("��С������=%d\n",e); 
}
