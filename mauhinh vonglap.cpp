#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cout<<"nhap n:";cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int sosao=1;sosao<=i;sosao++)
		{
		
			cout<<"*";
		
		}
		cout<<endl;
	}
	cout<<"________________________"<<endl;
	
	for(int i=1;i<=n;i++)
	{
		for(int sosao=1;sosao<=i;sosao++)
		{
		
			cout<<sosao;
		
		}
		cout<<endl;
	}
		cout<<"________________________"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int sosao=1;sosao<=i;sosao++)
		{
		
			cout<<i;
		
		}
		cout<<endl;
	}
}
