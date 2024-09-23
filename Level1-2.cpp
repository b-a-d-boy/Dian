#include<stdio.h>
int main()
{ 
	int h;
	scanf("%d",&h);
	int money=h;
	printf("Total consumption of %d yuan(共消费%d元)\nPlease insert coins(请投币)\n", money, money);
	while( money>0)
    {
		scanf("%d",&h);
		money-=h;
		if(money>0)
    		printf("Still need %d yuan(还需%d元)\n", money, money);
    }
	printf("Payment successful, change in progress(缴费成功，正在找零)\n%d", 0-money);
	return 0;
}
