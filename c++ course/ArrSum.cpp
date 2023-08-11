/* #include<iostream>
using namespace std;

int sum (int arr[],int n) {

 int sum =0;
 for(int i=0; i< size;i++) {

     sum= arr[i] + sum
 }
  return sum;
}

int main(){
    int size;
    cin>>size;

    int arr[100];

    for (int i=0;i<size;i++){

        cin>>arr[i];
    }

    cout<< "sum arr[] of size" <<size<<"is"<<sumArr(arr,size)  <<endl;
    return 0;
} */
#include<iostream>
using namespace std;
int sumArr(int arr[], int size)
{

  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum = arr[i] + sum;
  }
  return sum;
}
int main()
{
  int size;
  cin >> size;

  int arr[100];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Sum of arr[] of size  " << size << " is " << sumArr(arr, size) << endl;

  return 0;
}