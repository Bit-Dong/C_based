#include<stdio.h>                       //��������A^2+B^2=C^2 (�ٶ�A<B<C)��һ����������A��B��C�� 
int main()                              //����3^2+4^2=5^2 
{
	int a,b,c,n,i=0;
    printf("����1-n���еĹ�����  n=");
	scanf("%d",&n);
	 
	for(a=1;a<=n;a++)
	{
		for(b=a+1;b<=n;b++)
		{
			for(c=b+1;c<=n;c++)
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
