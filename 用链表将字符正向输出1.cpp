#include <stdio.h>
#include <stdlib.h>
//������Ķ��壺
typedef char DataType;		//DataType�������κ���Ӧ������������int, float��char
typedef struct node			//������Ͷ���
{	DataType data;			//����������
	struct node *next;		//����ָ����
}ListNode;
typedef ListNode *LinkList;

int main()
{
	LinkList head;
	LinkList CreateListR(void);
	void PrintList(LinkList head);
	head=CreateListR();		//����������
	PrintList(head);		//��ӡ������

}

//������Ľ�����
LinkList CreateListR(void)
{	char ch;
	LinkList head;			//ͷָ��
	ListNode *s,*r;			//����ָ��
	head=NULL;				//����ʼΪ��
	r=NULL;					//����βָ�뿪ʼΪ��
	while ((ch=getchar())!='\n')
	{	s=(ListNode *)malloc(sizeof(ListNode));	//�����½��
		s->data=ch;
		if (head==NULL)
			head=s;			//�½�����ձ�
		else r->next=s;
		r=s;
	}
	if (r!=NULL)
		r->next=NULL;		//���ڷǿձ���β���ָ�����ÿ�
	return head;			//����ͷָ��
}

//������Ĵ�ӡ��
void PrintList(LinkList head)
{
	ListNode *p;
	for(p=head;p;p=p->next)
		printf("%c",p->data);
	printf("\n");
}
