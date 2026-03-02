#include <stdio.h>
int main()
{
	int t1;
	int t2;
	
	scanf("%d %d",&t1,&t2);
	
    int hour2=t2/60;
	int min2=t2%60;
	
	t1=t1+hour2*100+min2;
	
	if (t1%100==60) {
		t1-60;
		t1+100;
	}
	printf("%d",t1);
	
	return 0;
}
