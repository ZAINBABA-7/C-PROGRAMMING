#include<iostream>
using namespace std;
//switch break statment2
int main(){
    int age;
    cout<<"Tell Me Your Age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"now you are teenage"<<endl;
        break;
    case 22:
        cout<<"now you are younger"<<endl;
        break;
    case 4:
        cout<<"now you are child"<<endl;
        break;
    
    default:
        cout<<"sorry not found"<<endl;
        break;
    }
    cout<<"done with switch cases"<<endl;
    return 0;
}
