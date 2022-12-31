// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main(){
  int n = 5;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<i; j++)
    {
        cout<<n-j<<" ";
    }

    cout<<endl;
  }
}
