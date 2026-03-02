#include <stdio.h>
int main()
{
	int hour1,min1;
	int hour2,min2;
	
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	
	int t = hour1*60+min1-hour2*60-min2;
	
	printf("时差为%d小时%d分",t/60,t%60);
	return 0;	
}
