#include<stdio.h>
char a[6];
int b[6]={0},c[6]={0},money=0;
int rh(char i,int x,int y,int z)
{
	if(i!=a[x] && b[x]!=0)
	{
		printf("Error(�������)\n");
		return 1;
	}
	a[x]=i;//����
	b[x]+=z;//��� 
	c[x]=y;//��� 
	return 0;
}
int xh(char i,int x,int y)
{
	if(i!=a[x])
	{
		printf("Error(ѡ������)\n");
		return 1;
	}
	if(b[x]<y)
	{
		printf("Error(ȱ��)\n");
		return 1;
	}
	b[x]-=y;//���� 
	money+=c[x]*y;//�Ӽ� 
	return 0;
}
int main()
{ 
	printf("Start receiving goods(��ʼ���)\n");
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
	printf("Finished receiving goods(�������)\nStart selling(��ʼ����)\n");
	while(0==0)
	{
		printf("Please select goods(��ѡ��)\n");
		while(0==0)
		{	
			scanf("%c",&k);
			scanf("%c %c %c",&k,&l,&m);
			if(k==69 && l==78 && m==68 )
				break;
			xh(k,l-48,m-48);
		}
		printf("Finished selecting goods(ѡ������)\nTotal consumption of %d yuan(������%dԪ)\nPlease insert coins(��Ͷ��)\n", money, money);	
		while( money>0)
    	{
			scanf("%d",&h);
			money-=h;
			if(money>0)
    			printf("Still need %d yuan(����%dԪ)\n", money, money);
    	}
		printf("Payment successful, change in progress(�ɷѳɹ�����������)\n%d\n", 0-money);
		printf("Do you want to continue selecting goods(�Ƿ����ѡ��)\nPlease enter any key except N and enter to continue, otherwise please enter N(�����������N���س���������������֮������N)\n");//cout << "Do you want to continue selecting goods(�Ƿ����ѡ��)\nPlease enter T to continue, otherwise please enter N(����������T����֮������N)";
		scanf("%c",&k);
		scanf("%c",&k);
		if(k==78)
			break;
		money=0;
	}
	return 0;
}
