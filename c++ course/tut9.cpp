#include<iostream>

using namespace std;

int main(){
   
   //cout<<"namaste duniya";
    int age;
  cout<<"Tell me your age"<<endl;
    cin>>age;
       if((age<18) && (age>1)){      //[1------
        cout<<"you cannot come to my party"<<endl;
          }
    else if(age==18){
      cout<<"you are not kid.you can come"<<endl;
          }
    else if(age<1){
       cout<<"you are not even born"<<endl;
         }
       else{
          cout<<"you can come to my party"<<endl;

             return 0;
       }

              //[2-----
       /*switch (age)
       {
       case 18:
         cout<<"you are 18"<<endl;
           break;
       case 22:
          cout<<"you are 22"<<endl;
          break;
          case 2:
          cout<<"you are 2"<<endl;
          break;

       default:
        cout<<"no special cases"<<endl;
         break;
       }

         cout<<"Done with switch case";

         return 0;  */
}



          
   
   



      
   
   