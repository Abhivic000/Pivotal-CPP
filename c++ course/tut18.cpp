#include<iostream>
using namespace std;

int sum(int a, int b){
      int c= a+b;
      return c;}
      
int swap (int *a, int *b ){
int temp = *a;
  *a = *b;
  *b = temp ;
   return 0;
}

int main(){
     int a=4 , b=5;
    // cout<<"The sum of 4 and 5 is"<<sum(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(&a,&b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}