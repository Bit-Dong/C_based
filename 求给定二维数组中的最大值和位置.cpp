#include<stdio.h>
int main()
{
	int max,i,j,hang,lie;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};    //3��4���� (��ά���飩 
	max=a[0][0]; 
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				hang=i+1;
				lie=j+1;
			}
		}
	}
	printf("�˶�ά�����е����ֵ��%d,��λ�ڵ�%d�е�%d��\n",max,hang,lie);
} 
