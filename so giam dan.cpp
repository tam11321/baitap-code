#include<iostream>

using namespace std;

int main(void)
{
	int n,batdau,ketthuc;
	cout<<"nhap so giam dan:";cin>>n;
	batdau=1;
	ketthuc=n;
	for(int i=ketthuc;i>=batdau;i--)
	{
		
		cout<<"cac so giam dan la:"<<i<<endl;
	}
}
