#include<stdio.h>
int main()
{
	int a[10],*p,i;
	p=&a[0];//p=a;Ҳ����
	printf("����a:\n");
	for(i=0;i<=9;i++)
	{
		a[i]=i;
		printf("%5d",a[i]);
	} 
	printf("\n");
	printf("����a�ĵ�ַ��\n");
	for(i=0;i<10;i++)
	{
		printf("%5d ",&a[i]);
	}
	printf("\n");
	printf("ָ��pָ����������ݣ�\n");
	for(i=0;i<10;i++)
	{
		printf("%5d",p[i]);//p[i]=*p+i;
	}
	printf("\n");
	printf("ָ��pָ������ĵ�ַ��\n");
	for(i=0;i<10;i++)
	{
		printf("%5d ",&p[i]); //&p[i]=p+i;
	}
	printf("\n");
	printf("ָ���Լ��ĵ�ַ��\n");
	for(i=0;i<10;i++)
	{
		printf("%5d ",&p+i);
	} 
}
