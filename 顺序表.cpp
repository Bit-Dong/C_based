#include<stdio.h>//˳���Ķ��� 
#define listsize 100//��ռ��С �ɸ���ʵ����Ҫ���� 
typedef int datatype;//datatype����ʹ�κ���Ӧ������������int 
typedef struct
{
datatype data[listsize];//����data���ڴ�ű��� 
int length;//��ǰ�ı��� 
}seqlist;

int main()
{
	seqlist L;
	int n=5,i,x;//��������˳����� 
	L.length=0;
	void createlist(seqlist *L,int n);
	void printlist(seqlist L,int n);
	int locatelist(seqlist L,datatype x);
	createlist(&L,n);//����˳��� 
	printlist(L,n);//��ӡ˳��� 
    printf("����Ҫ���ҵ�ֵ��"); 
	scanf("%d",&x);
	i=locatelist(L,x);
	if(i==0)
		printf("δ�ҵ�%d!\n",x);
		else
		printf("�ҵ�%d,�ڵ�%d��λ���ϣ�\n",x,i);
}

void createlist(seqlist *L,int n) //˳���Ľ��� 
{
int i;
for(i=0;i<n;i++)
scanf("%d",&(*L).data[i]);
//printf("%d  \n\n",(*L).data[i]);
(*L).length=n;
//for(i=0;i<n;i++)
//printf("%d   ",L.data[i]);
}

void printlist(seqlist L,int n)//˳���Ĵ�ӡ 
{int i;
for(i=0;i<n;i++)
	printf("%d   ",L.data[i]);
	printf("%d  ",i);
	printf("\n");
}

int locatelist(seqlist L,datatype x)//˳���Ĳ��� 
{int i=0;
while(i<L.length &&L.data[i]!=x)//�����ڻ�����ʹ<> 
       ++i;
if(i<L.length)return i+1;
else return 0;
 } 
