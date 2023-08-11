#include<iostream>
using namespace std;

int main(){
  int n;
  int i;
  int arr[100];
  int key;
  cin>>n;
  for( i=0 ; i<n; i++){
     cin>>arr[i];
  }
  for( i= 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"Enter element looking for:"<<endl;
  cin>>key;

     for( i= 0; i<n; i++){
        if(arr[i]==key){
        cout<<"The position of the element is :"<<i<<endl;
        break;
        }
     }
        if(i==n){
          cout<<"Element is not found"<<endl;
        }

     
    return 0;
}