//����������   ѧ�ţ�2006702-02 
//�������⣺��һ������a+aa+aaa+aaaa+aaaaa��
 
#include<stdio.h>
int main()
{
	int a,b,c,d,e,s;
	printf("please input a:");
	scanf("%d",&a);
	b=a*10+a;
	c=a*100+b;
	d=a*1000+c;
	e=a*10000+d;
	s=a+b+c+d+e;
	printf("%d+%d+%d+%d+%d=%d\n",a,b,c,d,e,s);
}
