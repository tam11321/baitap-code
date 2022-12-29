#include<stdio.h>

int main(void)
{
	int sonam,sotuan,songay,x,ngayle;
	printf("\n nhap so ngay can chuyen doi");
	scanf("%d",&x);
	songay=x;
	printf("\n so ngay = %d",x);
	sonam=x/365;
	printf("\n so nam = %d",x/365);
	songay=x-sonam*365;
	sotuan=songay/7;
	printf("\n so tuan = %d",sotuan);
	ngayle=x-(sonam*365)-(sotuan*7);
	printf("\nso ngay le %d",ngayle);
	
}
