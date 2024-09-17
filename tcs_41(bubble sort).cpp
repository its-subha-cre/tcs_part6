#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[7]={3,1,6,5,9,2,8};
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<7;i++)
	{
		cout<<arr[i];
	}
}