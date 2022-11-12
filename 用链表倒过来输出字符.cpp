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
	LinkList CreateListF(void);
	void PrintList(LinkList head);
	head=CreateListF();		//����������
	PrintList(head);		//��ӡ������

}

//������Ľ�����
LinkList CreateListF(void)
{	char ch;
	LinkList head,s;			//ͷָ��,ע�ⶨ��
	//ListNode *s;			//����ָ��
	head=NULL;				//����ʼΪ��
	ch=getchar();
	while (ch!='\n')
	{	s=(ListNode *)malloc(sizeof(ListNode));	//�����½��
		s->data=ch;
		s->next=head;
		head=s;
		ch=getchar();
	}
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
