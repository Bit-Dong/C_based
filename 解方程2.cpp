//����������    ѧ�ţ�2006702-02 
//�������⣺�󷽳�X^3-2X-5=0������[1.5,2.5]�ϵ�һ��ʵ���� Ҫ�󣺰���������ķ�ʽ��ȷ��С�����ڶ�λ
 
#include<stdio.h>
#include<math.h>
int main()
{
	double x,t,v,n=1,min=1;
	for(x=1.5;x<=2.5;x=x+0.001)
	{
		v=x*x*x-2*x-5;
		t=fabs(v);
		if(n>t)
		{
			//printf("x=%.2f,t=%.2f\n",x,t);
			if(t<min)
			{
				min=t;
				printf("t=%.2f,x=%.2f\n",t,x);
			}
			
		}
	}
	
}
