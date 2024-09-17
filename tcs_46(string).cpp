#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s="string";
	string y="";
	int c;
	for(int k=0;k<s.length();k++)
	{
		if(s[k]=='i')
		{
			c=k;
			for(int j=k-1;j>=0;j--)
			{
				y=y+s[j];
			}
			//continue;
		}
		//y=y+s[i];
	}
	for(int i=c+1;i<s.length();i++)
	{
		y=y+s[i];
	}
	cout<<y;
}