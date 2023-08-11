#include<iostream>

using namespace std;

int c=45;

int main() {
    int a,b,c;
cout<<"Enter the value of a:"<<endl;
 cin>>a;
 cout<<"Enter the value of b:"<<endl;
 cin>>b;
 c=a+b;
 cout<<"The sum is "<<c<<endl;
  //'::' is known as scope resolution.
 cout<<"the globle c is"<<::c;
  return 0;
}
// float d=34.4F;
//long double e=34.4L;L(l) for long double,F(f) for float,other wise c++ count it in double.