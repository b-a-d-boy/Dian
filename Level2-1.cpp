#include<stdio.h>
char a[6];
int b[6]={0},c[6]={0},money=0;
int rh(char i,int x,int y,int z)
{
	if(i!=a[x] && b[x]!=0)
	{
		printf("Error(入货错误)\n");
		return 1;
	}
	a[x]=i;//种类
	b[x]+=z;//入货 
	c[x]=y;//入价 
	return 0;
}
int xh(char i,int x,int y)
{
	if(i!=a[x])
	{
		printf("Error(选货错误)\n");
		return 1;
	}
	if(b[x]<y)
	{
		printf("Error(缺货)\n");
		return 1;
	}
	b[x]-=y;//出货 
	money+=c[x]*y;//加价 
	return 0;
}
int main()
{ 
	printf("Start receiving goods(开始入货)\n");
	char k,l,m;
	int h;
	scanf("%c %c %c",&k,&l,&m);
	scanf("%d",&h);
	rh(k,l-48,m-48,h);
	while(0==0)
	{
		scanf("%c",&k);
		scanf("%c %c %c",&k,&l,&m);
		if(k==69 && l==78 && m==68 )
			break;
		scanf("%d",&h);
		rh(k,l-48,m-48,h);
	}
	printf("Finished receiving goods(入货结束)\nStart selling(开始售卖)\n");
	while(0==0)
	{
		printf("Please select goods(请选货)\n");
		while(0==0)
		{	
			scanf("%c",&k);
			scanf("%c %c %c",&k,&l,&m);
			if(k==69 && l==78 && m==68 )
				break;
			xh(k,l-48,m-48);
		}
		printf("Finished selecting goods(选货结束)\nTotal consumption of %d yuan(共消费%d元)\nPlease insert coins(请投币)\n", money, money);	
		while( money>0)
    	{
			scanf("%d",&h);
			money-=h;
			if(money>0)
    			printf("Still need %d yuan(还需%d元)\n", money, money);
    	}
		printf("Payment successful, change in progress(缴费成功，正在找零)\n%d\n", 0-money);
		printf("Do you want to continue selecting goods(是否继续选货)\nPlease enter any key except N and enter to continue, otherwise please enter N(继续请输入除N，回车以外的任意键，反之请输入N)\n");//cout << "Do you want to continue selecting goods(是否继续选货)\nPlease enter T to continue, otherwise please enter N(继续请输入T，反之请输入N)";
		scanf("%c",&k);
		scanf("%c",&k);
		if(k==78)
			break;
		money=0;
	}
	return 0;
}
