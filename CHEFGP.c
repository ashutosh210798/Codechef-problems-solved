#include<stdio.h>
#include<string.h>
int main()
{
	int tc,x,y,len,i;
	char s[100000];

	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%s",s);
		len=strlen(s);
		scanf("%d %d",&x,&y);
		if(s[0]=='a')
		{
			if(len%2==0)
			{for(i=0;i<len;i=i+2)
					printf("ab");
			printf("\n");
		}
		else
		{
			for(i=0;i<len-1;i=i+2)
					printf("ab");
				printf("a\n");
		}
		
		}

		else
		{
			if(len%2==0)
			{for(i=0;i<len;i=i+2)
					printf("ba");
			printf("\n");
		}
		else
		{
			for(i=0;i<len-1;i=i+2)
					printf("ba");
				printf("b\n");
		}


		}
		
		/*if(cw==1 && h==2)
		printf("yes\n");
	else
		printf("no\n");
*/

	}


}