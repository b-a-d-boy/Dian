#include<stdio.h>
int main()
{ 
	printf("Start receiving goods(��ʼ���)\n");
	char k;
	int l,m,h;
	scanf("%c %d %d %d",&k,&l,&m,&h);
	printf("Finished receiving goods(�������)\n");
	printf("%d:", l);	
	for(int i=1;i<=h;i++)
		printf("%c", k);
	printf(" %d", m);
	return 0;
}
