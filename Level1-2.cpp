#include<stdio.h>
int main()
{ 
	int h;
	scanf("%d",&h);
	int money=h;
	printf("Total consumption of %d yuan(������%dԪ)\nPlease insert coins(��Ͷ��)\n", money, money);
	while( money>0)
    {
		scanf("%d",&h);
		money-=h;
		if(money>0)
    		printf("Still need %d yuan(����%dԪ)\n", money, money);
    }
	printf("Payment successful, change in progress(�ɷѳɹ�����������)\n%d", 0-money);
	return 0;
}
