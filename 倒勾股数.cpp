#include<stdio.h>                  //����������1/A^2+1/B^2=1/C^2 ��һ����������A��B��C�� 
int main()                         //����1/156^2+1/65^2=1/60^2 
{
	int a,b,c,n,i=0;
    printf("����1-n���еĵ�������  n="); 
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		for(b=a+1;b<=n;b++)
		{
			for(c=b+1;c<=n;c++)
			{
			if(a*a*(b*b+c*c)==b*b*c*c) 
			{
				i++;
				printf("a=%d,b=%d,c=%d,i=%d\n",a,b,c,i);
			}
	    	}
		}
	}
}
