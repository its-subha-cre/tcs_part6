#include<iostream>
#include<algorithm>
using namespace std;

int quicksort(int arr[],int low,int high)
{
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	while(true)
	{
		while(arr[i]<=pivot&&i<=high)
		{
			i++;
		}
			while(arr[j]>=pivot&&j>=low+1)
		{
			j--;
		}
	  if (i >= j) {
            break;
        }
        swap(arr[i], arr[j]);
	
	}
	swap(arr[j],arr[low]);
			return j;		
}
void qs(int arr[],int low,int high)
{
	if(low<high)
	{
	int partition=quicksort(arr,low,high);
	qs(arr,low,partition-1);
	qs(arr,partition+1,high);
		}
}
int main()
{
		int arr[7]={3,1,6,5,9,2,8};
		qs(arr,0,6);
		for(int i=0;i<7;i++)
	{
		cout<<arr[i];
	}	
}