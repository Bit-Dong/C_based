#include"stdio.h"
int main()
{
	char a;
	printf("input a lowercase letter:");
	a=getchar();
	a=a-32;               //��Сд��ĸת���ɶ�Ӧ�Ĵ�д��ĸ 
	printf("%c\n",a);
	return 0;
}
