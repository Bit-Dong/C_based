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
	ListNode *p;
	DataType key;
	LinkList CreateListR1(void);
	LinkList LocateNode(LinkList head,DataType key);
	void PrintList(LinkList head);
	head=CreateListR1();		//����������
	PrintList(head);		//��ӡ������
	printf("�����������ҵ�Ԫ�أ�");
	scanf("%c",&key);
	p=LocateNode(head,key);
	if (p==NULL)
		printf("δ�ҵ�\n");
	else
		printf("�ҵ���\n");
}

//������Ľ�����
LinkList CreateListR1(void)
{	char ch;
	LinkList head=(ListNode *)malloc(sizeof(ListNode));
	ListNode *s,*r;
	r=head;					//βָ���ֵָ��ͷ���
	while ((ch=getchar())!='\n')
	{	s=(ListNode *)malloc(sizeof(ListNode));	//�����½��
		s->data=ch;
		r->next=s;
		r=s;
	}
	r->next=NULL;
	return head;			//����ͷָ��
}

//������Ĵ�ӡ��
void PrintList(LinkList head)
{
	ListNode *p;
	for(p=head->next;p;p=p->next)
		printf("%c",p->data);
	printf("\n");
}

//������Ĳ���
LinkList LocateNode(LinkList head,DataType key)
{//�ڴ�ͷ���ĵ�����head�в�����ֵΪkey�Ľ��
	ListNode *p=head->next;	//�ӿ�ʼ���Ƚ�
	while (p&&p->data!=key)	//ֱ��pΪNULL��p->data��keyΪֹ
		p=p->next;			//ɨ����һ���
	return p;
}
