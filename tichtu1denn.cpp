#include<iostream>
using namespace std;
int main(void)
{
	int n,i;
	i=1;
	cout<<"nhap so can tinh:";cin>>n;
	do
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
		i++;
	}while(i<=n);
	
}
