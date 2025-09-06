#include<iostream>
#include<vector>
using namespace std;

int  partition(vector<int>&arr,int st,int end)
{
	int idx = st-1;
	int pivot = arr[end];
	
	for(int j = st;j<end;j++){
		
		if(arr[j]<=pivot)
		{
			idx++;
			swap(arr[idx],arr[j]);
		}
	}
	idx++;
	swap(arr[idx],arr[end]);
	return idx;
}
void Quick_sort(vector<int>&arr,int st,int end)
{
	if(st<end)
	{
		int pivIdx = partition(arr,st,end);
		
		Quick_sort(arr,st,pivIdx-1);
		Quick_sort(arr,pivIdx+1,end);
	}
}


int main()
{
	vector<int> arr ={12,31,35,8,32,17,6,8,17,17};
	int st = 0;
	int end = arr.size()-1;
	Quick_sort(arr,st,end);
	
	for(auto it:arr)
	{
		cout<<it<<" ";
	}
	
	
}