#include<stdio.h>
long factor(int n)
{
	long f;
	if(n==0)
	f=1;
	else
	f=n*factor(n-1);     //�ݹ���ã���n-1 ����
	return f; 
}
int main()
{
	long y;
	int n;
	scanf("%d",&n);
	y=factor(n);
	printf("%d!=%d\n",n,y);
	return 0;
}
