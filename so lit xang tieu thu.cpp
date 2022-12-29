#include<stdio.h>

int main(void)
{
	int x,y;
	
	printf("\nNhap quang duong xe di duoc"); printf("/(km)");
	scanf("%d",&x);
	printf("\n nhap quang duong xe di duoc la %d",x);
	printf("\n Nhap so lit xang "); printf("\(lit)");
	scanf("%d",&y);
	printf("\n so lit xang tieu hao la %d",y);
	printf("\n Trung binh xe chay duoc la %f",(float)x/y); printf("\/lit");
	return 0;
	
	
	
	
}
