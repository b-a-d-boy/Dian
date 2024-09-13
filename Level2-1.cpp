#include<bits/stdc++.h>
using namespace std;
char a[6];
int b[6]={0},c[6]={0},money=0;
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
int main()
{ 
	cout << "Start receiving goods(开始入货)\n"; 
	char k,l,m;
	int h;
	while(0==0)
	{
		cin >> k >> l>> m;
		if(k==69 && l==78 && m==68 )
			break;
		cin >> h;
		rh(k,l-48,m-48,h);
	}
	cout << "Finished receiving goods(入货结束)\n";
	cout << "Start selling(开始售卖)\n";
	cout << "Please select goods(请选货)\n";
	while(0==0)
	{
		cin >> k >> l>> m;
		if(k==69 && l==78 && m==68 )
			break;
		xh(k,l-48,m-48);
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
	return 0;
}
