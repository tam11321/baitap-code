#include<iostream>
using namespace std;

int main(void)
{
	int n,demsochan=0,demsole=0;
	cout<<"nhap so n:";cin>>n;
	
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		
			demsochan++;
		else
			demsole++;
	
	}
		cout<<"\nso chan la:"<<demsochan<<"\nso le la:"<<demsochan;
}
