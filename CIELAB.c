#include <stdio.h>
#include <stdlib.h>


int main()
{
int a,b,c,num,i;
    scanf("%d %d",&a,&b);
    num=a-b;
    
    c=num%10;
    num=num/10;
    

    for(i=1;i<9;i++)
    {
    	if(i!=c)
    	{

    		num=num*10 + i;
    		break;
    	}
    } 
    printf("%d\n",num );

    return 0;
}
