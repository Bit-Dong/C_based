#include<iostream>
using namespace std;

class BASE
{
	char c;
public:
	BASE(char n):c(n)     // ��ĳ�Ա��ʼ���б�ķ��� 
	{	
	}
	virtual ~BASE()     //������Ҫ��һ������������ 
	{
		cout<<c;
	}
};

class DERIVED:public BASE     //�̳�BASE 
{
	char c;
public:
	DERIVED(char n):BASE(n+1),c(n)    //������(����)���캯������ʹ�ó�ʼ�����б���ƽ�ֵ���ݸ�����(����)���캯��
	{
	}
	~DERIVED()
	{
		cout<<c;
	}
};

int main(){
	DERIVED('X');   //������DERIVED�����   �ȵ��û��๹�캯�����ٵ��������๹�캯��,�ȵ���������������������ٵ��û������������
	return 0;	
}
