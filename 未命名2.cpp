#include <stdio.h>

int main()
{
	int yingcun = 0;
	int yingchi = 0;
	int shengao = 0;
	float suzi = 12;
	
	printf("输入英尺");
	scanf("%d",&yingchi);
	
	printf("输入英寸");
	scanf("%d",&yingcun);
	
	printf("身高为%f米",(yingchi + yingcun/suzi)*0.3048);
	return 0;

}

