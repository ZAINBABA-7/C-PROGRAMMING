#include<iostream>
using namespace std;

int main(){
for loop table
int a=6;
for(int i=1; i<=5; i++)
{
  cout<<a*i<<endl;
}

// while loop table
int n=7;
int i=1;
while (i<=5)
{
  cout<<n*i<<endl;
  i++;
}

// do-while loop table
  int b=9;
  int i=1;
  do{
    cout<<b*i<<endl;
    i++;
  }while(i<=5);
  
  return 0;
}