#include<stdio.h>

int main(void)
{
	int a,b,c;
	printf("nhap goc thu nhat:");
	scanf("%d",&a);
	printf("nhap goc thu hai:");
	scanf("%d",&b);
	printf("nhap goc thu ba:");
	scanf("%d",&c);
	if(a>0 && a==b==c)
	{
		printf("do la tam giac");
	}
	else
	{
		printf("do khong phai la tam giac")
	}
}
