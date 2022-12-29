#include<stdio.h>

int main(void)
{
	int namsinh,sotuoi;
	
	printf("nhap nam sinh cua ban");
	scanf("%d",&namsinh);
	printf("nhap so tuoi cua ban");
	scanf("%d",&sotuoi);
	if(namsinh>=2004 && 6<=sotuoi<=10)
	{
		printf(" ban dang hoc cap 1");	
	}
	else if(namsinh>=2004 && 10<=sotuoi<=15)
	{
		printf("ban dang hoc cap 2");
	}
	else if(namsinh>=2004 && 15<=sotuoi<=18)
	{
		printf("ban dang hoc cap 3");	
	}
	
}
