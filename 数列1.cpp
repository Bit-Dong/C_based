//����������     ѧ�ţ�2006702-02 
//�������⣺f(0)=f(1)=1��f(2)=0��f(n)=f(n-1)-2f(n-2)+f(n-3) (n>2)��f(10)��f(60)�ĺ͡� 

#include<stdio.h>
int main()
{
	long long int a=1,b=1,c=0,d,n,s=0;
	for(n=3;n<=60;n++)
	{
		d=c-2*b+a;
		if(n>=10&&n<=60)
		{
			s=s+d;
			printf("s=%d\n",s);
		}
		a=b;
		b=c;
		c=d;
	}
 } 
