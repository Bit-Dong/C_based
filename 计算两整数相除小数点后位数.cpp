#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	printf("������ӣ�\n");         //����<��ĸ��������������� 
	scanf("%d",&a);
	printf("�����ĸ��\n");
	scanf("%d",&b);
	printf("��������С������λ����\n");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
			a*=10;              //a=a*10 
			for(n=9;n>0;n--)
			{
				if(a>n*b)
				{
					a=a%(n*b);
					break;        //�˳�������Ǹ�forѭ�� 
				}
			}
		printf("��%3d��С��λΪ%d\n",i,n);          //%3d����Ϊ�������� 
	}
}
