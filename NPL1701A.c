#include<stdio.h>

int max(int a,int b,int c);

int max(int a,int b,int c)
{
	if(a<=c && a<=b)
		return a;
	else if(b<=a && b<=c)
		return b;
	else
		return c;
}

int main()
{
	int r,g,b;
	scanf("%d %d %d",&r,&g,&b);
	printf("%d",max(r,g,b));
}
