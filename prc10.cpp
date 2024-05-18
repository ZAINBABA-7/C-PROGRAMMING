#include<iostream>
using namespace std;
// BREAK AND CONTINUE STATEMENTS //
int main(){
    // BREAKS //
// for (int i = 0; i < 10; i++){
//     cout<<i<<endl;
//     if (i==6)
//     {
//         break;
//     }
// }
   // CONTINUE //
int i = 1;
while(i<10){
  if (i==4)
  {
    continue;
  }
  cout<<i<<endl;
  i++;
}
 return 0;
}