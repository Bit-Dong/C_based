#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a[10],m,i;
	printf("����ʮ������");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=1,m=a[0];i<10;i++)
	{
		if(max(m,a[i]>m))
		{
			m=max(m,a[i]);
		}
	}
	printf("����ʮ��������������%d,m);
}
    int max(int x,int y)
    {
    	int z;
    	z=x>y?x:y;
    	return z;
	}
