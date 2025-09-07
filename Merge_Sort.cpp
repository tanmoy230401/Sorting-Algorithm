#include<bits/stdc++.h>
typedef long long ll;
#define endl '\n'
#define INF 1000000000
const double PI=3.141592653589793238460;
#define  M 1000000007
const int N=1e5+10;
long long int fact[N];
using namespace std;

void merge(vector<int>&arr,int st,int mid,int end)
{
   vector<int>tmp;
   
   int i = st;
   int j = mid +1;
   
   while(i<=mid && j<=end)
   {
    if(arr[i]<=arr[j])
    {
      tmp.push_back(arr[i++]);
    }
    else
    {
      tmp.push_back(arr[j++]);
    }
   }
   
   while(i<=mid) tmp.push_back(arr[i++]);
   
   while(j<=end) tmp.push_back(arr[j++]);
   
   for(int k=0;k<tmp.size();k++)
   {
    arr[st+k] = tmp[k];
   }
   
}

void MergeSort(vector<int>&arr,int st,int end)
{
  if(st<end)
  {
    int mid = st + (end - st)/2;
    MergeSort(arr,st,mid);
    MergeSort(arr,mid+1,end);
    merge(arr,st,mid,end);
  }
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   vector<int> arr = {23,5,7,2,1,76,43,-1,14,67};
   
   int n = arr.size();
    
   MergeSort(arr,0,n-1);
   
   
   for(int it:arr)
   {
    cout<<it<<" ";
   }
 
 
 }
     
