#include<stdio.h>
int main()
{
	struct Student                    //�����ṹ������ struct Student 
	{
		int num;
		char name[20];
		float score;
		long long int tell; 
	}
	student1,student2;            //���������ṹ����� student1��student2 
	scanf("%d%s%f%lld",&student1.num,student1.name,&student1.score,&student1.tell);       //����ѧ��1���� 
	scanf("%d%s%f%lld",&student2.num,student2.name,&student2.score,&student2.tell);       //����ѧ��2���� 
	printf("The hight score is :\n");
	if(student1.score>student2.score)
	printf("%d %s %6.2f %lld\n",student1.num,student1.name,student1.score,student1.tell);
	else if(student1.score<student2.score)
	printf("%d %s %6.2f %lld\n",student2.num,student2.name,student2.score,student2.tell);
	else
	{
		printf("%d %s %6.2f %lld\n",student1.num,student1.name,student1.score,student1.tell);
		printf("%d %s %6.2f %lld\n",student2.num,student2.name,student2.score,student2.tell);
	}
	return 0;
}
