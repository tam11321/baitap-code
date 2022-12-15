#include<stdio.h>
#include<iostream>
using namespace std;
	
int main()
{
	int a,b,c,d ;
	
	cout<<"\nhay nhap dinh a";cin>>a;
	cout<<"\nhay nhap dinh b";cin>>b;
	cout<<"\nhay nhap dinh c";cin>>c;
	
	d = a+b+c;
	if(a != 0 && b != 0 && c != 0 && d==180)
	{
		cout<<"tam giac co 3 goc lan luot la"<<a<<","<<b<<","<<c<<","<<"hop le";
		
	}
	else
	{
		cout<<"tam giac co 3 goc lan luot la"<<a<<","<<b<<","<<c<<","<<"k hop le";
	}
}
