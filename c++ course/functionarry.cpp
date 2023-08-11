#include<iostream>
using namespace std;

 /* int main(){
    int n=10;
    int fifth[10]={1};

  for(int i=0; i<n ;i++){

  cout<<fifth[i]<<" ";
  } */
   
   void printArray(int arr[], int size)  {
     
     cout<<"printing the array" <<endl;
     for( int i=0; i<size; i++) {

       cout<<arr[i] << " ";
     }
       cout<<" printing Done "<<endl;
   } 
    int main(){
       int first[15]={1,2,3,7};
         int n=15;
          printArray(first,15);

    
int sec[10]={7,77,777};
  
  printArray(sec,10);
    return 0;
}