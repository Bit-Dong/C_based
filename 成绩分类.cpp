//����������    ѧ�ţ�2006702-02 
//�������⣺90������A��  60-89 B��   60һ��C��
 
#include<stdio.h>
int main()
{
	int score;
	printf("�����������");
	scanf("%d",&score);
	if(score>=90)
	printf("A");
	if(score>=60&&score<=89)
	printf("B");
	if(score<=0)
	printf("C");
}
