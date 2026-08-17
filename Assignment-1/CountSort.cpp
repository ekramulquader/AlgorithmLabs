/*
11.	Write a C++ program to implement Counting Sort.
*/

#include<iostream>
using namespace std;

#define MAX(x,y) ((x>y)?x:y)

void countSort(int arr[],int size){
  int max = arr[0];
  for(int i=0;i<size;i++) max = MAX(max,arr[i]);
  int temp[max+1]={0};
  for(int i=0;i<size;i++) temp[arr[i]]++;
  int i=0,j=0;
  while(i<=max){
    if(temp[i]-- > 0) arr[j++] = i;
    else i++;
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int &x:arr) cin>>x;
  for(int x:arr) cout<<x<<" ";
  countSort(arr,n);
  cout<<endl;
  for(int x:arr) cout<<x<<" ";
  return 0;
}