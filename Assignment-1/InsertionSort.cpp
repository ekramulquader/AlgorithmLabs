/*
6.	Write a C++ program to implement Insertion Sort.
*/

#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
  int key,j;
  for(int i=1;i<size;i++){
    key = arr[i];
    j = i-1;
    while(j>=0 && (arr[j] > key)) arr[j+1] = arr[j--];
    arr[j+1] = key;
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  insertionSort(arr,n);
  cout<<endl;
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}