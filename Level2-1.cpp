#include<bits/stdc++.h>
using namespace std;
char a[6];
int b[6]={0},c[6]={0},money=0;
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
int main()
{ 
	cout << "Start receiving goods(��ʼ���)\n"; 
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
	cout << "Finished receiving goods(�������)\n";
	cout << "Start selling(��ʼ����)\n";
	cout << "Please select goods(��ѡ��)\n";
	while(0==0)
	{
		cin >> k >> l>> m;
		if(k==69 && l==78 && m==68 )
			break;
		xh(k,l-48,m-48);
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
	return 0;
}
