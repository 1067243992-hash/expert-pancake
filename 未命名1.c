#include <stdio.h>

int main()
{
	int pay = 0;
	int bill = 0;
	
	printf("«Î ‰»Î∆±√Ê ");
	scanf("%d",&pay);
	printf("«Î ‰»Î’Àµ• ");
	scanf("%d",&bill);
	
	if (pay<bill){
		printf("«Î≥‰÷µ£¨”‡∂Ó≤ª◊„");
	} else{
	printf("’“ƒ˙%d‘™",(pay-bill));
	}
	 return 0;
}
