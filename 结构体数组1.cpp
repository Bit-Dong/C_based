#include<string.h>        //������ʹ���ַ����� 
#include<stdio.h>
struct Person            //�����ṹ������ 
{
	char name[20];      //��ѡ������ 
	int count;          //��ѡ��Ʊ�� 
}
  leader[3]={"Li",0,"Zhang",0,"Sun",0};       //����ṹ�����鲢��ʼ�� 
int main()
{
  	int i,j;
  	char leader_name[20];             //�����ַ����� 
  	for(i=1;i<=10;i++)
  	{
  		scanf("%s",leader_name);       //�����ѡ������ 
  		for(j=0;j<3;j++)
  		if(strcmp(leader_name,leader[j].name)==0)           //strcmp�������Ƚ������ַ��� 
  		leader[j].count++;
	}
	printf("\nResult:\n");
	for(i=0;i<3;i++)
	printf("%5s:%d\n",leader[i].name,leader[i].count);
}
