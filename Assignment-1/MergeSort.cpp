/*
10.Write a C++ program to implement Merge Sort.
*/

#include<iostream>
using namespace std;

#define BUFFER 100
void merge(int arr[],int mid, int low, int high){
  int temp[BUFFER];
  int i=low,j=mid+1,k=0;
  while(i<=mid && j<=high)
    temp[k++] = (arr[i] <= arr[j])?arr[i++]:arr[j++];
  while(i<=mid) temp[k++] = arr[i++];
  while(j<=high) temp[k++] = arr[j++];
  for(int i=low,x=0;i<=high;i++,x++) arr[i] = temp[x];
}

void mergeSort(int arr[],int low, int high){
  if(low>=high) return;
  int mid = (low+high)/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);
  merge(arr,mid,low,high);
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int &x:arr) cin>>x;
  for(int x:arr) cout<<x<<" ";
  mergeSort(arr,0,n-1);
  cout<<endl;
  for(int x:arr) cout<<x<<" ";
  return 0;
}