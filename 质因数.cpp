#include<stdio.h>            //�����ӣ��ܱ��������������������� 
int main()
{
	int i,k=2,n=0;
	printf("����������������������������");
	scanf("%d",&i);
	while(k<=i)
	{
		if(i%k==0)
		{
			n++;
			printf("k=%d,n=%d\n",k,n);
			i=i/k;
			continue;
		}
		k++;
	 } 
}
