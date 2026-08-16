/*
2.	Write a C++ program to implement Recursive Linear Search
*/

#include<iostream>
using namespace std;

int recursiveLinearSearch(int arr[], int size, int key){
  if(size <= 0) return -1;
  if(arr[size-1] == key) return size-1;
  return recursiveLinearSearch(arr, size-1, key);
} 

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int key;
  cout<<"Enter key : ";
  cin>>key;
  int index = recursiveLinearSearch(arr,n,key);
  if(index == -1){
    cout<<"Element not found";
  }
  else{
    cout<<"Element found on index "<<index;
  }
}