/*
1.	Write a C++ program to implement iterative Linear Search.
*/

#include<iostream>
using namespace std;

int iterativeLinearSearch(int arr[], int size, int key){
  for(int i = 0;i<size;i++)
    if(arr[i]==key) return i;
  return -1;
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
  int index = iterativeLinearSearch(arr,n,key);
  if(index == -1){
    cout<<"Element not found";
  }
  else{
    cout<<"Element found on index "<<index;
  }
}