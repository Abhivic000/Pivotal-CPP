#include<iostream>
using namespace std;

//pointers in c++

int main(){

int a=3;

int* b = &a;

cout<<b<<endl;   //address of a
cout<<&a<<endl;   //address a
cout<<*b<<endl;    //value of a at the address
    
    //pointer to pointer
    int** c= &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    return 0;
}