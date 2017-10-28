#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>


using namespace std;

int main()
{
	
	


	int tc,a,b;
	cin>>tc;
	while(tc--)
	{
		int flag=0;
		
		vector<int>aa;
	    vector<int>ab;
	    vector<int>ac;
		cin >>a>>b;

		
		
		while(a!=0)
		{
			aa.push_back(a%10);
			a=a/10;

		}
		

				while(b!=0)
		{
			ab.push_back(b%10);
			b=b/10;

		}
		if(aa.size()==ab.size())
		{
			for(int i=0;i<ab.size();i++)
			{
				//cout << (ab[i]+aa[i])%10<<endl;
				ac.push_back((ab[i]+aa[i])%10);
			}

			
			for(int i=ac.size()-1;i>=0;i--)
			{

				if(ac[i]!=0 )
					flag=1;
				if(ac[i]==0 && flag==0)
					continue;

				cout<<ac[i];
			}
			if(flag==0)
				cout << "0";
			cout<<endl;


		}
		else if(aa.size()>ab.size())
		{
			for(int i=0;i<ab.size();i++)
			{
				//cout << (ab[i]+aa[i])%10<<endl;
				ac.push_back((ab[i]+aa[i])%10);
			}

			for(int i=aa.size()-1;i>ab.size()-1;i--)
			{
				cout<<aa[i];
			}
			//cout<<endl;
			for(int i=ac.size()-1;i>=0;i--)
			{

				cout<<ac[i];
			}
			cout<<endl;


		}
		else 
		{
			for(int i=0;i<aa.size();i++)
			{
				ac.push_back((ab[i]+aa[i])%10);
			}
			for(int i=ab.size()-1;i>aa.size()-1;i--)
			{
				cout<<ab[i];
			}
			for(int i=ac.size()-1;i>=0;i--)
			{
				cout<<ac[i];
			}

			cout<<endl;


		}
		

	}
}
