#include<stdio.h>
struct Student                    //�����ṹ������ struct Student 
{
	int num;
	float score;
	struct Student * next;
};
int main()
{
	struct Student a,b,c,*head,*p;        //���������ṹ�����a��b��c��Ϊ����Ľ�� 
	a.num=10101;                          //�Խ��a��num��score��Ա��ֵ 
	a.score=89.5;                          
	b.num=10103;                          //�Խ��b��num��score��Ա��ֵ
	b.score=90;
	c.num=10107;                          //�Խ��c��num��score��Ա��ֵ
	c.score=85;
	head=&a;                             //�����a����ʼ��ַ����ͷָ��head 
	a.next=&b;                           //�����b����ʼ��ַ����a����next��Ա 
	b.next=&c;                           //�����c����ʼ��ַ����a����next��Ա 
	c.next=NULL;                         //c����next��Ա�������������ַ 
	p=head;                              //ʹpָ��a��� 
	do
	{
		printf("%ld %5.1f\n",p->num,p->score);   //���pָ��Ľ������� 
		p=p->next;                                //ʹpָ����һ��� 
	} 
	while(p!=NULL);                              //�����c����p��ֵΪNULL��ѭ����ֹ 
	return 0;
}
