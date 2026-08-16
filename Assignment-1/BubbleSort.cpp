/*
5.	Write a C++ program to implement Bubble Sort.
*/

#include<iostream>
using namespace std;

#define swap(a,b) (a=a+b-(b=a))

void bubbleSort(int arr[], int size){
  for(int i=0;i<size;i++)
   for(int j=0;j<size-i-1;j++)
    if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  bubbleSort(arr,n);
  cout<<endl;
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}