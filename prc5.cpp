#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 3, b = 5, c=1233;
    cout<<"the value of a is:"<<setw(12)<<a<<endl; //manipulators
    cout<<"the value of b is:"<<setw(12)<<b<<endl; //manipulators
    cout<<"the value of c is:"<<c<<endl; 
    return 0;
}
   //operatror perdences
int main(){
    int a=3, b=4;
    int c =((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}