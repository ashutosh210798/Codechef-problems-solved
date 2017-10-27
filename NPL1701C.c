#include<stdio.h>
#include<math.h>
int main()
{
	int tc,s,i,j;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&s);
		int arr[s],count=0;
		for (i = 0; i <s; i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<s;i++)
		{
			
		 while (arr[i]%2 == 0)
    {
        count++;
        arr[i] = arr[i]/2;
    }
 
    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (i = 3; i <= sqrt(arr[i]); i = i+2)
    {
        // While i divides n, print i and divide n
        while (arr[i]%i == 0)
        {
            count++;
            arr[i] = arr[i]/i;
        }
    }
}
    printf("\n%d\n",count);
   /* if(count%2==0)
		printf("Friend\n");
	else
		printf("Appu\n");*/
	}



}

