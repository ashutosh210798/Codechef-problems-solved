#include<stdio.h>
int main()
{
	int tc,s,i;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&s);
		int arr[s],count=0;
		for (i = 0; i <s; i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=1;i<s-1;i++)
		{
			if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
				count++;
		}
		printf("%d\n",count);
	}



}

