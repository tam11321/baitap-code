#include<stdio.h>

int main(void)
{
	int sodiem;
	printf("nhap so diem cua ban:");
	scanf("%d",&sodiem);
	
	if(sodiem==5)
	{	printf("trung binh");}
	else if(sodiem<5)
	{	printf("con dung cai nit");	}
	else if(sodiem>6 && sodiem==7)
	{	printf("kha");}
	else if(sodiem>8 && sodiem==10)
	{	printf("gioi");}
}
