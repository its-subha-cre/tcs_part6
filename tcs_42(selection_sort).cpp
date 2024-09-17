#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int arr[7]={3,1,6,5,9,2,8};
		int k;
		for(int i=0;i<7;i++)
		{
			k=i;
			for(int j=i+1;j<7;j++)
			{
				if(arr[j]<arr[k])
				{
					k=j;
				}
			}
			swap(arr[i],arr[k]);
		}
			for(int i=0;i<7;i++)
	{
		cout<<arr[i];
	}
}