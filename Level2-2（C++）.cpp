#include<bits/stdc++.h>
using namespace std;
char a[6];
int b[6]={0},c[6]={0},money=0,t=0,flag=0;
int rh(char i,int x,int y,int z)
{
	if(i!=a[x] && b[x]!=0)
	{
		cout << "Error(�������)\n";
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
		cout << "Error(ѡ������)\n";
		return 1;
	}
	if(b[x]<y)
	{
		cout << "Error(ȱ��)\n";
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
		cout << "Error(���˳���)\n";
	}	
	return 0;
}
int main()
{ 
	cout << "Start receiving goods(��ʼ���)\n"; 
	char k[50],l[50],m[50];
	int h;
	while(0==0)
	{
		cin >> k[0] >> l[0]>> m[0];
		if(k[0]==69 && l[0]==78 && m[0]==68 )
			break;
		cin >> h;
		rh(k[0],l[0]-48,m[0]-48,h);
	}
	cout << "Finished receiving goods(�������)\n";
	cout << "Start selling(��ʼ����)\n";
	while(0==0)
	{
		cout << "Please select goods(��ѡ��)\n";
		while(0==0)
		{
			cin >> k[t] >> l[t] >> m[t];
			if(k[t]==66 && l[t]==65 && m[t]==67 )
			{
        	    cin >> k[t];
				if(t==0)
        	    	cout << "Error(���˴���)\n";
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
		cout << "Finished selecting goods(ѡ������)\n";
		printf("Total consumption of %d yuan(������%dԪ)\n", money, money);	
		cout << "Please insert coins(��Ͷ��)\n";
		while( money>0)
    	{
			cin >> h;
			money-=h;
			if(money>0)
    			printf("Still need %d yuan(����%dԪ)\n", money, money);
    	}
		cout << "Payment successful, change in progress(�ɷѳɹ�����������)\n";
		cout <<0-money;
		printf("Do you want to continue selecting goods(�Ƿ����ѡ��)\nPlease enter any key except N and enter to continue, otherwise please enter N(�����������N���س���������������֮������N)\n");//cout << "Do you want to continue selecting goods(�Ƿ����ѡ��)\nPlease enter T to continue, otherwise please enter N(����������T����֮������N)";
		cin >> k[0];
		if(k[0]==78)
			break;
		money=0;
		t=0;
		flag=0;
	}
	return 0;
}
