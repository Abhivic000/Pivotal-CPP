#include<iostream>
using namespace std;
//('int' bcoz return type is different then array taken,'binarysearch'is name of function, 'int arr[]'is name of array,'int size' is size of array
// or length of array , 'int key' is return type.)
int binarysearch(int arr[], int size, int key){

  int start = 0;
  int end = size -1;

  int mid = start + (end-start)/2;

  while(start <= end) {

      if (arr[mid] == key) {
          return mid;
      }
     //go to right wala part
      if(key > arr[mid]) {
          start = mid + 1;

      }
      else{
          end= mid-1;
      }
      mid = start + (end-start)/2;
  }

return-1;

}

 /* int main(){
    
   int even[6]= {2,4,6,8,12,18};
   int odd[5] = {3,8,11,14,16};

   int evenindex = binarysearch(even , 6 ,12);

  int oddindex = binarysearch(odd, 5, 11);

  cout<< "Index of 12 is "<< evenindex << endl;
  cout<< "Index of 11 is "<< oddindex << endl; 

    return 0;
}           */
int main(){
    int n;
    cin>>n;

    int input[100];

    for(int i=0; i<n ; i++){
        cin>> input[i];
    }

    int x;
    cin >> x;

    cout<<"the index is"<< binarysearch(input,n,x) << endl;
}