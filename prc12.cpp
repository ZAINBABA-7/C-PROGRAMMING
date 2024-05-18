#include<iostream>
using namespace std;
// Array Example //
int main(){
    int marks[]={23,43,55,68};
    int i=0;
    // Array with while loop
    // while (i<4)
    // {
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // Array with do-while loop
    do
    {
        cout<<"value of marks" <<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
    
        return 0;
}