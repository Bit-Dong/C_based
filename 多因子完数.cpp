#include<stdio.h>                 //��������������ĳ����n����������֮����n�ı�������� n Ϊ�������걸�� 
int main()                        //������28������������֮��Ϊ56 
{
	int i,j,n=0;
	for(i=1;i<=500;i++)
	{
	   int  s=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				s=s+j;
			}
		}
		if(s%i==0)
		{
			n++;
			printf("i=%d,j=%d,s=%d,n=%d\n",i,j,s,n); 
		}
	}
 } 
