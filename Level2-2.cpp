#include<stdio.h>
char a[6];
int b[6]={0},c[6]={0},money=0,t=0,flag=0;
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
int xhb(int x,int y)
{
	if(flag<3)
    {
        b[x]+=y;//�˻� 
    	money-=c[x]*y;//�˼�
        flag++;
        printf("Rollback successful, there are %d more chances left(���˳ɹ�������%d�λ���)\n",3-flag, 3-flag);
    }
    else 
	{
		t++;
		printf("Error(���˳���)\n");
	}	
	return 0;
}
int main()
{ 
	printf("Start receiving goods(��ʼ���)\n");
	char k[50],l[50],m[50];
	int h;
	scanf("%c %c %c",&k[0],&l[0],&m[0]);
	scanf("%d",&h);
	rh(k[0],l[0]-48,m[0]-48,h);
	while(0==0)
	{
		scanf("%c",&k[0]);
		scanf("%c %c %c",&k[0],&l[0],&m[0]);
		if(k[0]==69 && l[0]==78 && m[0]==68 )
			break;
		scanf("%d",&h);
		rh(k[0],l[0]-48,m[0]-48,h);
	}
	printf("Finished receiving goods(�������)\nStart selling(��ʼ����)\n");
	while(0==0)
	{
		printf("Please select goods(��ѡ��)\n");
		while(0==0)
		{
			scanf("%c",&k[t]);
			scanf("%c %c %c",&k[t],&l[t],&m[t]);
			if(k[t]==66 && l[t]==65 && m[t]==67 )
			{
        	    scanf("%c",&k[t]);
				if(t==0)
        	    	printf("Error(���˴���)\n");
				else
				{
					if(k[t]==75)
					{
						t--;
						xhb(l[t]-48,m[t]-48);
					} 
				}  
        	}
        	else
			{
				if(k[t]==69 && l[t]==78 && m[t]==68 )
					break;
				xh(k[t],l[t]-48,m[t]-48);
				t++;
			} 
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
		scanf("%c",&k[0]);
		scanf("%c",&k[0]);
		if(k[0]==78)
			break;
		money=0;
		t=0;
		flag=0;
	}
	return 0;
}
