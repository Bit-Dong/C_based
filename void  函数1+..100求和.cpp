#include<stdio.h>
int main()
{
	void qiuhe();  //����ӷ����� 
	qiuhe();       //���üӷ����� 
}
void qiuhe()       //�ӷ����� 
{
	int i,s=0;
	for(i=1;i<=100;i++)
	s=s+i;
	printf("s=%d\n",s);
}
