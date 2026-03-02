#include <stdio.h>

int main()
{

int amount = 100;
int price =0;

printf("请输入金额");
scanf("%d",&price);

printf("请输入票面");
scanf("%d",&amount);

printf("应该找您%d元",amount - price);	
	return 0;
}

