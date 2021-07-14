#include<bits/stdc++.h>
using namespace std;			
int main()
{
    int t; 
    string s[4],l[4];
    cin>>t;
    while(t--)
    {
		for(int i=0;i<4;i++)
		{
			cin>>s[i];
		}
		for(int i=0;i<4;i++)
		{
			cin>>l[i];
		}
		int c=0;
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(s[i]==l[j])
				{
				    c++;
				}
			}
		}
		if(c>=2)
		{
		    cout<<"similar"<<endl;	
		}
		else
		{
		    cout<<"dissimilar"<<endl;
		}
    }        
    return 0;
}