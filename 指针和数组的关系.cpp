#include<stdio.h>
int main()
{
	int a[10],*p,i;
	p=&a[0];//p=a;Ҳ����
	for(i=0;i<=9;i++)
	{
		a[i]=i;
		printf("%5d  ",a[i]);   //��������� 
		printf("%5d  ",&a[i]);  //��������ַ 
		printf("%5d  ",p[i]);   //ָ��ָ����������� 
		printf("%5d  ",&p[i]);  //ָ��ָ������ĵ�ַ 
		printf("%5d  ",p+i);    //ָ��ָ������ĵ�ַ 
		printf("%5d  ",*p+i);   //ָ��ָ����������� 
		printf("%5d  ",&p+i);   //ָ���Լ��ĵ�ַ 
		printf("\n"); 
	 } 
}
