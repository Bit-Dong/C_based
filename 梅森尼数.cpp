//����������    ѧ�ţ�2006702-02 
//�������⣺ ��[1, 21]��Χ��÷ɭ���������ֵ�Լ��������

#include<stdio.h>         //÷ɭ������ ÷ɭ������ָ��ʹ2^n-1Ϊ��������n
#include<math.h>
int main()
{
	int i,j,n=0,k,m,s=0;
	for(i=2;i<=21;i++)
	{
		m=pow(2,i)-1;
		k=1;
		for(j=2;j<=m-1;j++)
		{
			if(m%j==0)
			{
				k=0;
				break;
			}
		}
		if(k==1)
		{
			s=s+i;
			n++;
			printf("m=%d,n=%d,s=%d\n",m,n,s);
		}
	}
}
