#include<iostream>
using namespace std;

void LinearSearch( int arr[], int length, int item){
  for(int i=0; i<=length; i++){
    if (arr[i]==item){
      cout<<item <<"Found at index:"<<i ;
    return;}
  }
  cout<<"Not Found";}
  
  int main() {
    int arr[]={1,4,5,6,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    int item = 5;
    LinearSearch(arr, length, item);
    return 0;
  }

//Time Complexity : O(n)
//Space Complexity : O(1)
