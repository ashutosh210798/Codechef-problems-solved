#include<stdio.h>
int main()
{
	int tc,n,p,i,a;

	scanf("%d",&tc);
	while(tc--)
	{
		int cw=0,h=0;
		scanf("%d%d",&n,&p);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(a>=p/2)
				cw++;
			if(a<=p/10)
				h++;



		}
		
		if(cw==1 && h==2)
		printf("yes\n");
	else
		printf("no\n");


	}


}