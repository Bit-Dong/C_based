#include<iostream>
using namespace std;

int main()
{
	int a=10,b=20,c=30;
	int &ra=a;
	int &rb=b;
	int &rc=c;
	//int &arr[3]={ra,rb,rc};    �������������õ����� 
	int num[3]={a,b,c};
	int (&arr)[3]=num;      //��������� 
	for(int i=0;i<3;i++)
		cout<<arr[i]<<" ";  //���10 20 30 
	cout<<endl;
	return 0;
}
