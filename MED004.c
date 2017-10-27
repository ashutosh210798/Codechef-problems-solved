#include<stdio.h>
int main()
{
	int n,i;
	char s[106];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%c",&s[i]);
	printf("%d\n",n/8 );

	return 0;
}
