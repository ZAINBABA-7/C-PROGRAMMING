#include<iostream>
using namespace std;
// if else-if else Statment
int main(){
    int age;
    cout<<"Please Enter Your Age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"your are not allow in party"<<endl;
    }
    else if (age==18){
        cout<<"your are allow to get kid pass"<<endl;
    }
    else if (age<1){
        cout<<"your are born"<<endl;
    }
    else{
        cout<<"welcome to party"<<endl;
    }
    
    return 0;
}