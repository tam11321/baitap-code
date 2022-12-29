#include<stdio.h>

int main(void)
{
	int sotuoi,gioitinh;
	printf(" nhap so tuoi cua ban ");
	scanf("%d",&sotuoi);
	printf(" nhap gioi tinh cua ban ");
	scanf("%d",&gioitinh);
	if(sotuoi>=20 && gioitinh==0)
	{
		printf("chuc mung ban co cuoc song dau don nhu bao nguoi\n");
	}
	else if(sotuoi<20 && gioitinh==0)
	{
		printf("chuc mung ban duoc mot ve boc lich =)))");
		
	}
	else if(sotuoi>=18 && gioitinh==1)
	{
		printf("chuc mung ban co cuoc song sung suong nhu bao nguoi \n");
	}
	else if(sotuoi<18 && gioitinh==1)
	{
		printf("ban khong du tuoi de ket hon");
	}
}
