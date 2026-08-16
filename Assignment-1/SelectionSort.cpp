/*
7.	Write a C++ program to implement Selection Sort.
*/

#include<iostream>
using namespace std;

#define swap(a,b) (a=a+b-(b=a))

void selectionSort(int arr[],int size){
 for(int i=0;i<size-1;i++){
  int min_index = i;
  for(int j=i+1;j<size;j++) 
    min_index = (arr[min_index] > arr[j])?j:min_index;
  swap(arr[i],arr[min_index]);
 }  
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int &x:arr) cin>>x;
  for(int x:arr) cout<<x<<" ";
  selectionSort(arr,n);
  cout<<endl;
  for(int x:arr) cout<<x<<" ";
  return 0;
}