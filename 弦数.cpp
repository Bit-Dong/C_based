#include<stdio.h>           //����������Ȼ��A��B��C����A<B<C��A*A+B*B=C*C�����{A,B,C}Ϊһ�鹴������������A��B��C�ֱ��Ϊ�����ɡ��� 
int main()
{
	int a,b,c,i=0;
    for(c=100;c<=300;c++)
	{
		for(a=1;a<=c;a++)
		{
			for(b=a+1;b<=c;b++)
			{
			if(a*a+b*b==c*c)
			{
				i++;
				printf("a=%d,b=%d,c=%d,i=%d\n",a,b,c,i);
			}
	    	}
		}
	}
}
