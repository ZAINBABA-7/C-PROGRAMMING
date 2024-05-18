#include<iostream>
using namespace std;
// pointers //
int main(){
    int a=4;
    int* b=&a;
    // &---> (address of) operator
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;
    // *---> (value at)  dereference operator
    cout<<"the value at address b is "<<*b<<endl;
return 0;
}