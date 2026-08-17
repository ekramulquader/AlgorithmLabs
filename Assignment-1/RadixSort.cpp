/*
12. Write a C++ program to implement Radix Sort.
*/

#include<iostream>
using namespace std;

#define max(x,y) ((x>y)?x:y)

void countingSort(int arr[], int size, int pos){
  int output[size],temp[10]={0};
  for(int i=0;i<size;i++) temp[(arr[i]/pos)%10]++;
  for(int i=1;i<10;i++) temp[i] += temp[i-1];
  for(int i=size-1;i>=0;i--) output[temp[(arr[i]/pos)%10]---1] = arr[i];
  for(int i=0;i<size;i++) arr[i] = output[i];
}

void radixSort(int arr[], int size){
  int m = arr[0];
  for(int i=0;i<size;i++) m=max(m,arr[i]);
  for(int pos=1;m/pos>0;pos*=10){
    countingSort(arr,size,pos);
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int &x:arr) cin>>x;
  for(int x:arr) cout<<x<<" ";
  radixSort(arr,n);
  cout<<endl;
  for(int x:arr) cout<<x<<" ";
  return 0;
}