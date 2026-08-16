/*
8.	Write a C++ program to implement Quick Sort.
*/

#include<iostream>
using namespace std;

#define swap(a,b) (a=a+b-(b=a))

int partition(int arr[], int start, int end){
  int pivot = arr[start];
  int i = start+1;
  int j = end;
  while(i<j){
    while(i<=end && arr[i] <= pivot) i++;
    while( j>=start && arr[j] > pivot) j--;
    if(i<j) swap(arr[i],arr[j]);
  }
  swap(arr[start],arr[j]);
  return j;
}

void quickSort(int arr[], int start, int end){
  if(start>=end) return;
    int partition_index = partition(arr,start,end);
    quickSort(arr,partition_index+1,end);
    quickSort(arr,start,partition_index-1);
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int &x:arr) cin>>x;
  for(int x:arr) cout<<x<<" ";
  quickSort(arr,0,n-1);
  cout<<endl;
  for(int x:arr) cout<<x<<" ";
  return 0;
}