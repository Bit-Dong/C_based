#include<stdio.h>
//#include<math.h>  
int main()
{
int add(int x,int y);              //�ӷ� 
int add1(int x,int y);             //���� 
int add2(int x,int y);             //�˷� 
int add3(int x,int y);             //���� 
int max(int x,int y);              //���ֵ 
int min(int x,int y);              //��Сֵ 
long factor(int n);                //�׳� 
int gcd(int x,int y);              //���Լ�� 
int sushu(int n);                  //���� 
int a,b,c,d,e,f,g,h,i,j;
scanf("%d%d",&a,&b);
c=add(a,b);
printf("%d\n",c);
d=add1(a,b);
printf("%d\n",d);
e=add2(a,b);
printf("%d\n",e);
f=add3(a,b);
printf("%d\n",f);
g=max(a,b);
printf("%d\n",g);
h=min(a,b);
printf("%d\n",h);
i=factor(a);
printf("%d\n",i);
j=gcd(a,b);
printf("%d\n",j);
if(sushu(a))
printf("%d������\n",a);
else
printf("%d��������\n",a);
return 0;
}
int add(int x,int y)           //�ӷ����� 
{
	int z;
	z=x+y;
	return (z);
}
int add1(int x,int y)         //�������� 
{
	int z;
	z=x-y;
	return(z);
}
int add2(int x,int y)        //�˷����� 
{
	int z;
	z=x*y;
	return(z);
}
int add3(int x,int y)       //�������� 
{
	int z;
	z=x/y;
	return(z);
}
int max(int x,int y)       //max���� 
{
	int z;
	z=x>y?x:y;
	return(z);
}
int min(int x,int y)      //min���� 
{
	int z;
	z=x<y?x:y;
	return(z);
}                                                  //��forѭ����׳� 
long factor(int i)      //factor����               //long factor(int i) 
{                                                  //long f=1;
	long f;                                        //int i;
	if(i==0)                                       //for(i=1;i<=100;i++)
	f=1;                                           //f=f*i;
	else                                           //return f;
	f=i*factor(i-1);     //�ݹ���ã���n-1���� 
	return f;
}
int gcd(int x,int y)                              //      int gcd(int a,int b)
{                                                 //  { 
	int z;                                        //      int r;   
	if(y==0)                                      //      while(a%b!=0)
	z=x;                                         //   {    r=a%b;
	else                                         //        a=b;
	z=gcd(y,x%y);        //�ݹ����              //        b=r;
	return(z);                                   //   }    return b; 
}                                                //   }
int sushu(int n)
{
	int flag=1,i;
	for(i=2;i<=n-1;i++)
{
		if(n%i==0)
		flag=0;
		break;
}
	return (flag);
}
