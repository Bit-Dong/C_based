#include<stdio.h>
int main()
{
	int a,b,c,s=0; 
	for(a=1;a<=100;a++)     //a����Ϊ1öʱ 
	{
		for(b=1;b<=50;b++)  //b����Ϊ1öʱ 
		{
			for(c=1;c<=20;c++) //c����Ϊ1öʱ 
			{
				if(1*a+2*b+5*c==100)
				{
					s=s+1;
					printf("a=%d,b=%d,c=%d,s=%d\n",a,b,c,s);
				}
			}
		}
	}
	printf("s=%d\n",s);
}
