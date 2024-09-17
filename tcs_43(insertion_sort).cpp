#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[7]={3,1,6,5,9,2,8};
	int j;
	for(int i=1;i<7;i++)
	{
		 j=i;
		 while(j>0 && arr[j]<arr[j-1])
		 {
		 	swap(arr[j],arr[j-1]);
		 	j--;
		 }
	}
		for(int i=0;i<7;i++)
	{
		cout<<arr[i];
	}
}