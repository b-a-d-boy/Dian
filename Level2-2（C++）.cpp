#include<bits/stdc++.h>
using namespace std;
char a[6];
int b[6]={0},c[6]={0},money=0,t=0,flag=0;
int rh(char i,int x,int y,int z)
{
	if(i!=a[x] && b[x]!=0)
	{
		cout << "Error(入货错误)\n";
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
		cout << "Error(选货错误)\n";
		return 1;
	}
	if(b[x]<y)
	{
		cout << "Error(缺货)\n";
		return 1;
	}
	b[x]-=y;//出货 
	money+=c[x]*y;//加价 
	return 0;
}
int xhb(int x,int y)
{
	if(flag<3)
    {
        b[x]+=y;//退货 
    	money-=c[x]*y;//退价
        flag++;
        printf("Rollback successful, there are %d more chances left(回退成功，还有%d次机会)\n",3-flag, 3-flag);
    }
    else 
	{
		t++;
		cout << "Error(回退超次)\n";
	}	
	return 0;
}
int main()
{ 
	cout << "Start receiving goods(开始入货)\n"; 
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
	cout << "Finished receiving goods(入货结束)\n";
	cout << "Start selling(开始售卖)\n";
	while(0==0)
	{
		cout << "Please select goods(请选货)\n";
		while(0==0)
		{
			cin >> k[t] >> l[t] >> m[t];
			if(k[t]==66 && l[t]==65 && m[t]==67 )
			{
        	    cin >> k[t];
				if(t==0)
        	    	cout << "Error(回退错误)\n";
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
		cout << "Finished selecting goods(选货结束)\n";
		printf("Total consumption of %d yuan(共消费%d元)\n", money, money);	
		cout << "Please insert coins(请投币)\n";
		while( money>0)
    	{
			cin >> h;
			money-=h;
			if(money>0)
    			printf("Still need %d yuan(还需%d元)\n", money, money);
    	}
		cout << "Payment successful, change in progress(缴费成功，正在找零)\n";
		cout <<0-money;
		printf("Do you want to continue selecting goods(是否继续选货)\nPlease enter any key except N and enter to continue, otherwise please enter N(继续请输入除N，回车以外的任意键，反之请输入N)\n");//cout << "Do you want to continue selecting goods(是否继续选货)\nPlease enter T to continue, otherwise please enter N(继续请输入T，反之请输入N)";
		cin >> k[0];
		if(k[0]==78)
			break;
		money=0;
		t=0;
		flag=0;
	}
	return 0;
}
