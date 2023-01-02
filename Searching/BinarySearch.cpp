#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int l, int r, int item)
{
  while (l<=r){
  int mid=l+(r-l)/2;
  if (arr[mid]==item)
    return mid;
  
  if (arr[mid]<item)
    l=mid+1;
  else 
    r=mid-1;
      
  }
    return -1;
  
}
  
  
int main(){
    int arr[]={1,3,4,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item=7;
    int position = BinarySearch(arr,0,n-1,item);
    if (position == -1)
      cout<<"not found";
    else
        cout<<item<<"Found at index:"<<position;
      
    return 0;
  }
    
 //Time Complexity: O(n)
//Space Complexity: O(1)
