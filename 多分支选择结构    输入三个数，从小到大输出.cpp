#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	{
		t=a;a=b;b=t;
	}                   //ʵ��a��b�Ļ��� 
	if(a>c)
	{
		t=a;a=c;c=t;
	}                  //ʵ��a��c�Ļ��� 
	if(b>c)
	{
		t=b;b=c;c=t;
	}                 //ʵ��b��c�Ļ��� 
	printf("%d,%d,%d\n",a,b,c);
}  
                                          //�����⣡���� 
