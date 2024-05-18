#include<iostream>
using namespace std;
int main(){
    int a=4, b=5;
    // airthmathic operator
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    
    //assignment operator
    
    int a=3, b=5;
    char d='g';

    //comparison operator 
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;

    //logical operator
    cout<<"the value of (a==b)&&(a<b) is "<<((a==b) && (a<b))<<endl;
    cout<<"the value of (a==b)||(a<b) is "<<((a==b) || (a<b))<<endl;
    cout<<"the value of (!(a==b)) is "<<(!(a==b))<<endl;
return 0;
}