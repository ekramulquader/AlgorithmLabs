  /*
  4.	Write a C++ program to implement Recursive Binary Search
  */

  #include<iostream>
  using namespace std;

  #define swap(a,b) (a=a+b-(b=a))

  void sortArray(int arr[], int size){
    for(int i=0;i<size;i++)
      for(int j=0;j<size-i-1;j++)
        if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
  }

  int recursiveBinarySearch(int arr[], int key,int low, int high){
  if(low > high) return -1;
  int mid = (low+high)/2;
  if(arr[mid] == key) return mid;
  if(arr[mid] > key) return  recursiveBinarySearch(arr,key,low,mid-1);
  return recursiveBinarySearch(arr,key,mid+1,high);
  }

  int main(){
    int n;
    cin>>n;
    int low=0,high=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int key;
    cout<<"Enter key : ";
    cin>>key;
    sortArray(arr,n);
    int index = recursiveBinarySearch(arr,key,low,high);
    if(index == -1){
      cout<<"Element not found";
    }
    else{
      cout<<"Element found on index "<<index;
    }
  }