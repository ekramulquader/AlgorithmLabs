/*
3.	Write a C++ program to implement Iterative Binary Search
*/

#include<iostream>
using namespace std;

#define swap(a,b) (a=a+b-(b=a))

void sortArray(int arr[], int size){
  for(int i=0;i<size;i++)
    for(int j=0;j<size-i-1;j++)
      if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
}

int iterativeBinarySearch(int arr[],int size, int key){
  int min=0,max=size-1;
  while(min<=max){
    int mid = (min+max)/2;
    if(arr[mid] == key) return mid;
    if(arr[mid] > key) max = mid-1;
    if(arr[mid] < key) min = mid+1;
  }
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
  sortArray(arr,n);
  int index = iterativeBinarySearch(arr,n,key);
  if(index == -1){
    cout<<"Element not found";
  }
  else{
    cout<<"Element found on index "<<index;
  }
}